// TestFile3.cpp
#include "gtest/gtest.h"
#include "file3.h"

TEST(File3Test, Function5Test) {
    // Test your function from file3.c
    ASSERT_EQ(Function5(), 789);
}

TEST(File3Test, Function6Test) {
    // Test another function from file3.c
    ASSERT_EQ(Function6(), 101);
}
