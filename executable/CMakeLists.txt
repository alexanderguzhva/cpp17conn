# this is the executable that uses c++17 facilities and links libcpp17

cmake_minimum_required(VERSION 3.28)

set(SRC_FILES
    main.cpp
)

set(EXTERNAL_LIBRARIES
    libcpp17
)

add_executable(executable ${SRC_FILES})
target_link_libraries(executable PRIVATE ${EXTERNAL_LIBRARIES})


