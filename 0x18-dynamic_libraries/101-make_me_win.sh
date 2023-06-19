#!/bin/bash
wget -P /upload https://github.com/ELABDELLAOUI-HAJAR/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libmy.so 
export LD_PRELOAD=/upload/libmy.so
