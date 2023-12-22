#include "gtest/gtest.h"
#include "file1.h"

TEST(File1Test, Function1Test) {
    // Test your function from file1.c
    ASSERT_EQ(Function1(), 42);
}

TEST(File1Test, Function2Test) {
    // Test another function from file1.c
    ASSERT_EQ(Function2(), 84);
}
