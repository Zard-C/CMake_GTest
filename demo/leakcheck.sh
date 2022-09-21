# !/bin/bash
# using valgrind to check memory leak
valgrind --tool=memcheck --leak-check=full ${1}