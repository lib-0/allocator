#!/bin/sh

set -e

echo '[{"directory":"'"$(pwd)"'","arguments":["clang","-DG_SHARED=1","-Iinclude","-Iexternal_include","-x","c","-std=c99","-Wall","-Wextra","-Werror","-pedantic","-c","file.c","-o","file.o"],"file":"file.c" }]' > compile_commands.json
