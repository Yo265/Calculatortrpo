#define GTEST_MAIN

#include <func.h>
#include <gtest/gtest.h>

TEST(Multipl, test1) {
    double result = multipl(22,40);
    double expected = 880;
    ASSERT_EQ(expected, result);
}

TEST(Multipl, test2) {
    double result = multipl(-10,-12.1);
    double expected = 121;
    ASSERT_EQ(expected, result);
}

TEST(Multipl, test3) {
    double result = multipl(32,-0.5);
    double expected = -16;
    ASSERT_EQ(expected, result);
}

TEST(Multipl, test4) {
    double result = multipl(0,-121);
    double expected = 0;
    ASSERT_EQ(expected, result);
}

TEST(Division, test1) {
    double result = division(0,1002);
    double expected = 0;
    ASSERT_EQ(expected, result);
}

TEST(Division, test2) {
    double result = division(360,6);
    double expected = 60;
    ASSERT_EQ(expected, result);
}

TEST(Division, test3) {
    double result = division(155,2);
    double expected = 77.5;
    ASSERT_DOUBLE_EQ(expected, result);
}

TEST(Division, test4) {
    double result = division(0.48,0.3);
    double expected = 1.6;
    ASSERT_DOUBLE_EQ(expected, result);
}

TEST(Subtraction, test1) {
    double result = subtraction(0.48,-0.3);
    double expected = 0.78;
    ASSERT_DOUBLE_EQ(expected, result);
}

TEST(Subtraction, test2) {
    double result = subtraction(-45,32);
    double expected = 77;
    ASSERT_EQ(expected, result);
}

TEST(Subtraction, test3) {
    double result = subtraction(55,13);
    double expected = 42;
    ASSERT_EQ(expected, result);
}

TEST(Addition, test1) {
    double result = addition(0.53,13);
    double expected = 13.53;
    ASSERT_DOUBLE_EQ(expected, result);
}

TEST(Addition, test2) {
    double result = addition(32,-3);
    double expected = 29;
    ASSERT_EQ(expected, result);
}

TEST(Addition, test3) {
    double result = addition(-120.1,0);
    double expected = -120.1;
    ASSERT_DOUBLE_EQ(expected, result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
