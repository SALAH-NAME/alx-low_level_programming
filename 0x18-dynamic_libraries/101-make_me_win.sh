#!/bin/bash
wget -P /tmp/ https://github.com/SALAH-NAME/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libforwin.so 
export LD_PRELOAD=/tmp/libforwin.so
