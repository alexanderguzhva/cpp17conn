# this is the static library that uses cpp 20 facilities

cmake_minimum_required(VERSION 3.28)

set(SRC_FILES
    src/old_interface.cpp
)

set(HEADER_FILES
    src/old_interface.h
)

add_library(libcpp20 STATIC)
target_sources(libcpp20
    PRIVATE ${SRC_FILES}
    PUBLIC FILE_SET cxx_modules TYPE CXX_MODULES FILES src/some_module.cxx)
set_target_properties(libcpp20 PROPERTIES CXX_STANDARD 20 CXX_STANDARD_REQUIRED ON)

target_include_directories(libcpp20 PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)
target_compile_options(libcpp20 PRIVATE $<$<COMPILE_LANGUAGE:CXX>:-fPIC>)

add_subdirectory("thirdparty/cppcoro")
target_link_libraries(libcpp20 PRIVATE cppcoro)
