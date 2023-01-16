# include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(SOURCE_FILES
    MyClass.cpp
)

set(HEADER_FILES
    MyClass.h
)

# add_library(MyLib STATIC
#     ${SOURCE_FILES}
#     ${HEADER_FILES}
# )

# This line will tell CMake that we're building a shared library
# from the above source files
# named after the project's name
add_library(MyLib SHARED 
    ${SOURCE_FILES}
    ${HEADER_FILES}
    ${CMAKE_JS_SRC}
)

# This line will give our library file a .node extension without any "lib" prefix
set_target_properties(MyLib PROPERTIES PREFIX "" SUFFIX ".node")

# Essential library files to link to a node addon,
# you should add this line in every CMake.js based project.
target_link_libraries(MyLib 
    fmt::fmt
    ${CMAKE_JS_LIB}
)

# Include N-API wrappers
execute_process(COMMAND node -p "require('node-addon-api').include"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE NODE_ADDON_API_DIR
        )
string(REPLACE "\n" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
string(REPLACE "\"" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
target_include_directories(MyLib PRIVATE ${NODE_ADDON_API_DIR})
add_definitions(-DNAPI_VERSION=3)