#!/bin/bash
echo -e '#include <stdio.h>\nunsigned int random() { return 9; }' > /tmp/hack.c
gcc -shared -o /tmp/hack.so /tmp/hack.c
LD_PRELOAD=/tmp/hack.so

