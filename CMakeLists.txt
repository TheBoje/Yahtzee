cmake_minimum_required(VERSION 3.21)
project(Projet_COO)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Grab every file fulfilling last arg regex
# This makes `add_executable` less painful to read.
file(GLOB_RECURSE SOURCES_INCLUDE RELATIVE ${CMAKE_SOURCE_DIR} "include/**/*.hpp")
file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/**/*.cpp")
file(GLOB_RECURSE SOURCES_TESTS RELATIVE ${CMAKE_SOURCE_DIR} "tests/**/*.cpp")

add_executable(main ${SOURCES_INCLUDE} ${SOURCES})
add_executable(tests ${SOURCES_INCLUDE} ${SOURCES} ${SOURCES_TESTS})

enable_testing()

target_link_libraries(tests gtest_main)
add_test(NAME tests COMMAND tests)

