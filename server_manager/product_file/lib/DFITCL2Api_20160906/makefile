main: liblevel2Api.so main.cpp my_callback.h DFITCL2Api.h
	g++ -g -o main main.cpp -L . -llevel2Api
clean:
	rm main
release:
	rsync -vzrtopg --progress --ignore-errors --delete  --exclude .svn --exclude main --exclude liblevel2Api.so --exclude build* ./* /opt/TPX-Level2/level2api/demo/linux64-demo/
	bash ../../FRONTTRADE-LEVEL2APILINUX/package.sh
