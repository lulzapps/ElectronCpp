project(ElectronCpp)
cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CMake/conan.cmake)
conan_cmake_run(REQUIRES
    boost/1.81.0
    BASIC_SETUP CMAKE_TARGETS NO_OUTPUT_DIRS
    BUILD missing
    OPTIONS
        boost:shared=False 
        boost:without_test=False 
        boost:without_program_options=False 
        boost:without_filesystem=False 
        boost:without_system=False 
        boost:without_exception=False
        boost:without_contract=False
)
conan_basic_setup(NO_OUTPUT_DIRS KEEP_RPATHS)

add_subdirectory(MyLib)

