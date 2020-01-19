#include "fibonacci.cpp"
#include <gtest/gtest.h>

TEST(FibonacciFunctionTest, fibsequence)
{
    EXPECT_EQ(0, fibonacci(0));
    EXPECT_EQ(1, fibonacci(1));
    EXPECT_EQ(1, fibonacci(2));
    EXPECT_EQ(2, fibonacci(3));
    EXPECT_EQ(3, fibonacci(4));
    EXPECT_EQ(5, fibonacci(5));
    EXPECT_EQ(8, fibonacci(6));
    EXPECT_EQ(13, fibonacci(7));
    EXPECT_EQ(21, fibonacci(8));
    EXPECT_EQ(34, fibonacci(9));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
