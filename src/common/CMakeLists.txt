add_library(common STATIC
        utils.c
        ${CMAKE_SOURCE_DIR}/include/common/utils.h
)

target_include_directories(common PUBLIC ${CMAKE_SOURCE_DIR}/include)