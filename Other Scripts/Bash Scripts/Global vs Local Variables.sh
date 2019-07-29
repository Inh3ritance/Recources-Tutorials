#!/bin/bash
#Define bash global variables
#This variable is global and can be used anywhere
VAR="Global Variable"
function bash{
#define locale variable
local VAR="Local variable"
echo $VAR
}
echo $VAR
bash
#note the bash global variable did not change
#"local" is a reserved keyword in bash
echo $VAR