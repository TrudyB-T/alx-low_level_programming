#!/bin/bash
wget -P /tmp https://github.com/TrudyB-T/alx-low_level_programming/raw/master/0x18-dynamic_libraries/makeawish.so
export LD_PRELOAD=/tmp/makeawish.so
