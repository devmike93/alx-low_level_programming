#!/bin/bash
wget -q https://raw.githubusercontent.com/Naoufalhdr/alx-low_level_programming/main/0x18-dynamic_libraries/gig_millions/libwin.so
export LD_PRELOAD=./libwin.so
