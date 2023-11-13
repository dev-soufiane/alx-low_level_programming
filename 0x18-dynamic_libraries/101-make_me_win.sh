#!/bin/bash
wget -P https://github.com/dev-soufiane/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
