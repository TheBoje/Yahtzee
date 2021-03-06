cmake_minimum_required(VERSION 3.21)
project(Projet_COO)

set(CMAKE_CXX_STANDARD 17)

include_directories(src include)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
# Uncomment below for verbose build
#set(CMAKE_VERBOSE_MAKEFILE ON)

# Grab every file fulfilling last arg regex
# This makes `add_executable` less painful to read.
file(GLOB_RECURSE SOURCES_INCLUDE "include/**/*.hpp")
file(GLOB_RECURSE SOURCES "src/**/*.cpp")
file(GLOB_RECURSE SOURCES_TESTS "tests/**/*.cpp")
file(GLOB_RECURSE MOCKS "tests/mock/*.hpp")

add_executable(main src/main.cpp src/game_manager.cpp ${SOURCES_INCLUDE} ${SOURCES})
add_executable(tests tests/test_main.cpp ${SOURCES_INCLUDE} ${SOURCES} ${SOURCES_TESTS} ${MOCKS})

enable_testing()

target_link_libraries(tests gtest_main)
target_link_libraries(tests gmock_main)
add_test(NAME tests COMMAND tests)

