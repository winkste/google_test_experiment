# Add source files
add_library(MyLibrary
    folder1/file1.c
    folder1/file2.c
    folder2/file3.c
    folder2/file4.c
    main.c
)

add_executable(MyExecutable
    folder1/file1.c
    folder1/file2.c
    folder2/file3.c
    folder2/file4.c
    main.c
)

# Include directories for MyLibrary
target_include_directories(MyLibrary
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder1
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder2
)

# Include directories for MyExecutable
target_include_directories(MyExecutable
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder1
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder2
)