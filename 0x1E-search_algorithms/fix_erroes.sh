#!/bin/nash

# convert DOS line endings to Unix (LF)
dos2unix *.c

# Remove trailling whitespaces
sed -i 's/[[:space:]]\+$//' *.c
