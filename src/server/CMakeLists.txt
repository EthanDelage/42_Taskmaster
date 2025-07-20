add_executable(server
        main.c
        ${CMAKE_SOURCE_DIR}/include/server/server.h
)

target_link_libraries(server common)