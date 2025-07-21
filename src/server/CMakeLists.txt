set(LIB_DIR ${CMAKE_SOURCE_DIR}/lib)
set(LIBYAML_DIR ${LIB_DIR}/yaml-0.2.5/build)

include_directories(${LIBYAML_DIR}/include)
link_directories(${LIBYAML_DIR}/lib)

add_executable(server
        main.c
        ${CMAKE_SOURCE_DIR}/include/server/server.h
)

target_link_libraries(server common yaml)
