# README

## Build this project

```shell
./autobuild.sh
```

## Unit Test

```shell
./bin/unittest/ut
```

Console outputs:

```shell
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from foo
[ RUN      ] foo.ut_ctor
[       OK ] foo.ut_ctor (0 ms)
[ RUN      ] foo.ut_operator
[       OK ] foo.ut_operator (0 ms)
[ RUN      ] foo.lambda
/root/ros_yard/demo/unittest/ut.cpp:24: Failure
Expected equality of these values:
  true
  false
Lambda
[  FAILED  ] foo.lambda (0 ms)
[----------] 3 tests from foo (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] foo.lambda

 1 FAILED TEST

```

## Run memory leak check

```shell
./leakcheck.sh <exec>

# for example
./leakcheck.sh bin/unittest/ut 
```

Console outputs:

```shell
==43479== Memcheck, a memory error detector
==43479== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==43479== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==43479== Command: bin/unittest/ut
==43479== 
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from foo
[ RUN      ] foo.ut_ctor
[       OK ] foo.ut_ctor (7 ms)
[ RUN      ] foo.ut_operator
[       OK ] foo.ut_operator (3 ms)
[ RUN      ] foo.lambda
/root/ros_yard/demo/unittest/ut.cpp:24: Failure
Expected equality of these values:
  true
  false
Lambda
==43479== Conditional jump or move depends on uninitialised value(s)
==43479==    at 0x11722B: testing::AssertionResult testing::internal::CmpHelperEQ<int, int>(char const*, char const*, int const&, int const&) (gtest.h:1444)
==43479==    by 0x116EEB: testing::AssertionResult testing::internal::EqHelper<false>::Compare<int, int>(char const*, char const*, int const&, int const&) (gtest.h:1472)
==43479==    by 0x116387: foo_lambda_Test::TestBody() (ut.cpp:27)
==43479==    by 0x147520: HandleSehExceptionsInMethodIfSupported<testing::Test, void> (gtest.cc:2433)
==43479==    by 0x147520: void testing::internal::HandleExceptionsInMethodIfSupported<testing::Test, void>(testing::Test*, void (testing::Test::*)(), char const*) (gtest.cc:2469)
==43479==    by 0x13B1C5: Run (gtest.cc:2508)
==43479==    by 0x13B1C5: testing::Test::Run() (gtest.cc:2498)
==43479==    by 0x13B324: Run (gtest.cc:2684)
==43479==    by 0x13B324: testing::TestInfo::Run() (gtest.cc:2657)
==43479==    by 0x13B40C: Run (gtest.cc:2816)
==43479==    by 0x13B40C: testing::TestSuite::Run() (gtest.cc:2795)
==43479==    by 0x13B92B: testing::internal::UnitTestImpl::RunAllTests() (gtest.cc:5338)
==43479==    by 0x147A90: HandleSehExceptionsInMethodIfSupported<testing::internal::UnitTestImpl, bool> (gtest.cc:2433)
==43479==    by 0x147A90: bool testing::internal::HandleExceptionsInMethodIfSupported<testing::internal::UnitTestImpl, bool>(testing::internal::UnitTestImpl*, bool (testing::internal::UnitTestImpl::*)(), char const*) (gtest.cc:2469)
==43479==    by 0x13BB5B: testing::UnitTest::Run() (gtest.cc:4925)
==43479==    by 0x116C2F: RUN_ALL_TESTS() (gtest.h:2341)
==43479==    by 0x1164E9: main (ut.cpp:34)
==43479== 
[  FAILED  ] foo.lambda (26 ms)
[----------] 3 tests from foo (44 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (71 ms total)
[  PASSED  ] 2 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] foo.lambda

 1 FAILED TEST
==43479== 
==43479== HEAP SUMMARY:
==43479==     in use at exit: 0 bytes in 0 blocks
==43479==   total heap usage: 224 allocs, 224 frees, 117,370 bytes allocated
==43479== 
==43479== All heap blocks were freed -- no leaks are possible
==43479== 
==43479== Use --track-origins=yes to see where uninitialised values come from
==43479== For lists of detected and suppressed errors, rerun with: -s
==43479== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
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
