# include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(SOURCE_FILES
    MyClass.cpp
)

set(HEADER_FILES
    MyClass.h
)

add_library(MyLib STATIC
    ${SOURCE_FILES}
    ${HEADER_FILES}
)
