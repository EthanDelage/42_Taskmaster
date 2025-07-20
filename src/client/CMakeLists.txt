add_executable(client
        main.c
        ${CMAKE_SOURCE_DIR}/include/client/client.h
)

target_link_libraries(client common)