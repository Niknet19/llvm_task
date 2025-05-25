#!/bin/bash
clang -O0clang -O0 -S -emit-llvm const.c -o const_unoptimized.ll
clang -O1 -S -emit-llvm const.c -o const_optimized_O1.ll
clang -O2 -S -emit-llvm const.c -o const_optimized_O2.ll
