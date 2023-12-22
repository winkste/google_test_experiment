# Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.8.1  # Use an older release that is compatible with your Clang version
)
FetchContent_MakeAvailable(googletest)

# Test executable
add_executable(MyTests
    TestFile1.cpp
    TestFile2.cpp
    TestFile3.cpp
    TestFile4.cpp
    test_main.cpp
)

# Set the C++ standard for the test executable
target_compile_features(MyTests PRIVATE cxx_std_11)  # or 14, 17, etc.

# Disable specific warnings causing the build failure
target_compile_options(MyTests PRIVATE
    "-Wno-deprecated-copy"
    "-Wno-deprecated-declarations"  # Additional option to suppress deprecated declarations warning
)

# Include directories for MyTests
target_include_directories(MyTests
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder1
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/folder2
)

# Link with Google Test and MyLibrary
target_link_libraries(MyTests
    PRIVATE
        gtest_main
        MyLibrary
)
