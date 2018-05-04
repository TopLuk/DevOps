[CmdletBinding(SupportsShouldProcess=$true)]
Param(
    [Parameter(Mandatory=$true)]
    [string]$xmlFilepath,
    [Parameter(Mandatory=$true)]
    [string]$configValues,
    [Parameter(Mandatory=$true)]
    [string]$paramValues
)

$ErrorActionPreference = "stop"
$xmlDoc = New-Object -TypeName "System.Xml.XmlDocument"
$xmlDoc.Load($xmlFilepath)
Get-Content $configValues | ForEach-Object {
    [string] $line = $_.Trim()
    if (-not [string]::IsNullOrEmpty($line)) {
        [string[]] $pair = $line.Split(('='), 2)
        if ($pair.Length -eq 2) {
            $xpath = $pair[0].Trim()
            $value = $pair[1].Trim()
            $node = $xmlDoc.SelectSingleNode($xpath)
            if ($node -ne $null) {
                $node.InnerText = $value
                Write-Verbose "$xpath = $value"
            } else {
                Write-Verbose "Not found xml node for: $xpath"
            }
        } else {
            Write-Verbose "Invalid config line: $line"
        }
    } else {
        Write-Verbose "Ignore empty config line"
    }
}
$paramValues = Get-Content $paramValues
if (-not [string]::IsNullOrEmpty($paramValues)) {
    $paramValues = $paramValues.Trim()
    if (-not [string]::IsNullOrEmpty($paramValues)) {
        $xmlDoc.SelectSingleNode("/BacktestContext/StratConfig").InnerXml = $paramValues
    } else {
        Write-Verbose "Ignore empty param values"
    }
} else {
    Write-Verbose "Ignore empty param values"
}
$xmlDoc.Save($xmlFilepath)