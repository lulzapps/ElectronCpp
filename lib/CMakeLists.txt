project(ElectronCpp)
cmake_minimum_required(VERSION 3.20)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CMake/conan.cmake)
conan_cmake_configure(
    REQUIRES 
        # boost/1.81.0
        fmt/6.1.2
    GENERATORS 
        cmake_find_package
)

conan_cmake_autodetect(settings)

conan_cmake_install(PATH_OR_REFERENCE .
    BUILD 
        missing
    REMOTE 
        conancenter
    SETTINGS 
        ${settings}
)

find_package(fmt REQUIRED)

# Essential include files to build a node addon,
# you should add this line in every CMake.js based project.
include_directories(${CMAKE_JS_INC})

add_subdirectory(MyLib)

