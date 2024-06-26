# this is the shared library that uses c++17 facilities and links libcpp20

cmake_minimum_required(VERSION 3.28)

set(HEADER_FILES
    library.h
)

set(SRC_FILES
    library.cpp
)

set(EXTERNAL_LIBRARIES
    libcpp20
)

add_library(libcpp17 SHARED ${SRC_FILES})
set_target_properties(libcpp17 PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

target_link_libraries(libcpp17 PRIVATE ${EXTERNAL_LIBRARIES})

target_include_directories(libcpp17 PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)
