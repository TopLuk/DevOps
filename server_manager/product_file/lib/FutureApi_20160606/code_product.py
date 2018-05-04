#!/usr/bin/python

import re

class FileLineWrapper():
    def __init__(self, f):
        self.f = f
        self.line = 0
    def close(self):
        return self.f.close()
    def readline(self):
      for line in self.f:
            self.line += 1

class CodeProduct():
  def __init__(self, f):
    self.f = f
    self.in_struct = False
    self.struct_first_line = False

  def close(self):
    return self.f.close()

  def test_in_struct(self):
    if self.in_struct:
      print "in_struct"
    else:
      print "not in_struct"

  def ProductByFileLine(self):
    for line in self.f:
      if ("struct" in line) and not(self.in_struct):
        self.in_struct = True
        line_list = (line.split())
        ftdc_struct = line_list[1]
        print 'inline std::ostream& operator << (std::ostream& os, const {0}& ftdc_struct)'.format(line_list[1]) + ' {'
      elif self.in_struct:
        if '{' in line:
          self.struct_first_line = True
        elif '}' in line:
          print "<< \" <--- End\";\n"
          print "return os;"
          print "}\n"
          self.in_struct = False
        else:
          line_list = line.split("\t")
          if len(line_list) == 3:
            if self.struct_first_line:
              # print "if (&ftdc_struct != NULL) {"
              print "os << \"ftdc_struct({1}) ---> {0}:\" << ftdc_struct.{0}".format(re.sub('[;\r\n]','',line_list[2]), ftdc_struct)
              self.struct_first_line = False
            else:
              print "<< \" {0}:\" << ftdc_struct.{0}".format(re.sub('[;\r\n]','',line_list[2]))




code_product = CodeProduct(open("FutureFtdcUserApiStruct.h", "r"))
code_product.ProductByFileLine()
code_product.close()

