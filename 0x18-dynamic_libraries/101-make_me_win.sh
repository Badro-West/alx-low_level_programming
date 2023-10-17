cp ./gm /tmp/gm
export LD_PRELOAD=$(pwd)/libhack.so
/tmp/gm 9 8 10 24 75 9
