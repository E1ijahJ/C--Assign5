cmake_minimum_required(VERSION 3.6)
project(CPPAssign5 VERSION 1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
enable_testing()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GoogleTest Setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e88cb95b92acbdce9b058dd894a68e1281b38495.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# Define the library
add_library(pointer_lib STATIC src/PointerFunctions.cpp)
target_include_directories(pointer_lib PUBLIC include)

# Define test target
add_subdirectory(tests)