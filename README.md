# README

A `CMake-Example` to build a project and do `unit test` using `googletest` and run memory leak check with `valgrind`

## Dependencies

### 1. CMake

```shell
#install 
sudo apt install cmake

#unistall 
sudo apt autoremove cmake 
```

### 2. GoogleTest

```shell
sudo apt install libgtest-dev
```

### 3. valgrind

http://valgrind.org/downloads/valgrind-3.12.0.tar.bz2

```shell
tar -jxvf valgrind-3.12.0.tar.bz2

cd valgrind-3.12.0

./configure

make 

make install
```
