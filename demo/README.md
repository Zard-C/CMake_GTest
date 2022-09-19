# README

## Init the project, make a dir to build

```shell
mkdir cmake-build
```

## Build this project

```shell
./autobuild.sh
```

## Unit Test

```shell
./bin/unittest/ut
```

## Directory

If build successfully, the project would  be like:

```shell
.
└── demo
    ├── CMakeLists.txt
    ├── README.md
    ├── autobuild.sh
    ├── bin
    │   ├── test
    │   └── unittest
    ├── cmake-build
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   ├── Makefile
    │   ├── cmake_install.cmake
    │   ├── install_manifest.txt
    │   ├── test
    │   └── ut
    ├── include
    │   └── foo.hpp
    ├── src
    │   └── foo.cpp
    └── unittest
        └── ut.cpp
```
