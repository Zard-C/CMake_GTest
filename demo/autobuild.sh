# set a build directory 
cmake -B cmake-build

# build this project 
cmake --build cmake-build 

# install 
cd cmake-build/ && make install && cd - 