#!/bin/bash

if [ $# -lt 1 ]
then
  echo "Usage: runC file.c"
  exit 1
fi

# get source file with full path
SFILE="$(cd "$(dirname "$1")"; pwd -P)/$(basename "$1")"

# set compiled file with full path (removing the file xt)
CFILE="${SFILE%%.*}"

# compile && execute && remove
gcc "$SFILE" -o "$CFILE" && "$CFILE" && rm "$CFILE"