cmake_minimum_required(VERSION 3.5)
project(unittest)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# set compile type 
set(CMAKE_BUILD_TYPE Debug) 

# set install path 
set(CMAKE_INSTALL_PREFIX ../)

# add include directories 
include_directories(include) 

# add executable 
add_executable(test src/foo.cpp) 


add_executable(ut unittest/ut.cpp)

# target_link_libraries 
target_link_libraries(ut gtest pthread) # need to link pthread

# install packages exec and libs  out 
install(TARGETS test 
        RUNTIME DESTINATION bin
)   

install (TARGETS ut 
        RUNTIME DESTINATION bin/unittest)

# install headers 
file(GLOB_RECURSE DEMO_LIB_HEADERS include/*.hpp)
# install (FILES ${DEMO_LIB_HEADERS} DESTINATION include)

# ament_package()