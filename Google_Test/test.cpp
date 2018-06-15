#include "pch.h"
//#define GTEST_MAIN
#include "func.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}



TEST(multipl, test1) {
	double result = multipl(22, 40);
	double expected = 880;
	ASSERT_EQ(expected, result);
}

TEST(multipl, test2) {
	double result = multipl(-10, -12.1);
	double expected = 121;
	ASSERT_EQ(expected, result);
}

TEST(multipl, test3) {
	double result = multipl(32, -0.5);
	double expected = -16;
	ASSERT_EQ(expected, result);
}

TEST(multipl, test4) {
	double result = multipl(0, -121);
	double expected = 0;
	ASSERT_EQ(expected, result);
}

TEST(division, test1) {
	double result = division(0, 1002);
	double expected = 0;
	ASSERT_EQ(expected, result);
}

TEST(division, test2) {
	double result = division(360, 6);
	double expected = 60;
	ASSERT_EQ(expected, result);
}

TEST(division, test3) {
	double result = division(155, 2);
	double expected = 77.5;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(division, test4) {
	double result = division(0.48, 0.3);
	double expected = 1.6;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(subtraction, test1) {
	double result = subtraction(0.48, -0.3);
	double expected = 0.78;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(subtraction, test2) {
	double result = subtraction(-45, 32);
	double expected = -77;
	ASSERT_EQ(expected, result);
}

TEST(subtraction, test3) {
	double result = subtraction(55, 13);
	double expected = 42;
	ASSERT_EQ(expected, result);
}

TEST(addition, test1) {
	double result = addition(0.53, 13);
	double expected = 13.53;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(addition, test2) {
	double result = addition(32, -3);
	double expected = 29;
	ASSERT_EQ(expected, result);
}

TEST(addition, test3) {
	double result = addition(-120.1, 0);
	double expected = -120.1;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(factorial, test1) {
	double result = factorial(0);
	double expected = 1;
	ASSERT_EQ(expected, result);
}

TEST(factorial, test2) {
	double result = factorial(6);
	double expected = 720;
	ASSERT_EQ(expected, result);
}

TEST(percentage, test1) {
	double result = percentage(120, 13);
	double expected = 15.6;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(percentage, test2) {
	double result = percentage(-150, 10);
	double expected = -15;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(sinus, test1) {
	double result = sinus(90);
	double expected = 1;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(sinus, test2) {
	double result = sinus(315);
	double expected = -0.707107;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(sinus, test3) {
	double result = sinus(-610);
	double expected = 0.939693;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(cosinus, test1) {
	double result = cosinus(60);
	double expected = 0.5;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(cosinus, test2) {
	double result = cosinus(410);
	double expected = 0.642788;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(cosinus, test3) {
	double result = cosinus(-55);
	double expected = 0.573576;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(tg, test1) {
	double result = tg(13);
	double expected = 0.230868;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(tg, test2) {
	double result = tg(0);
	double expected = 0;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(tg, test3) {
	double result = tg(-33);
	double expected = -0.649408;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(ctg, test1) {
	double result = ctg(80);
	double expected = 0.176327;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(ctg, test2) {
	double result = ctg(-519);
	double expected = 2.605089;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(power, test1) {
	double result = power(11, 3);
	double expected = 1331;
	ASSERT_EQ(expected, result);
}

TEST(power, test2) {
	double result = power(-13, 4);
	double expected = 28561;
	ASSERT_EQ(expected, result);
}

TEST(power, test3) {
	double result = power(-5, -3);
	double expected = -0.008;
	ASSERT_DOUBLE_EQ(expected, result);
}

TEST(square_root, test1) {
	double result = square_root(4);
	double expected = 2;
	ASSERT_EQ(expected, result);
}

TEST(square_root, test2) {
	double result = square_root(12);
	double expected = 3.464101;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(square_root, test3) {
	double result = square_root(1.2);
	double expected = 1.095445;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(epow, test1) {
	double result = epow(0);
	double expected = 1;
	ASSERT_EQ(expected, result);
}

TEST(epow, test2) {
	double result = epow(-5);
	double expected = 0.006738;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(epow, test3) {
	double result = epow(4);
	double expected = 54.598150;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(epow, test4) {
	double result = epow(5.1);
	double expected = 164.021907;
	ASSERT_NEAR(expected, result, 0.000001);
}


TEST(lg, test1) {
	double result = lg(55);
	double expected = 4.007333;
	ASSERT_NEAR(expected, result, 0.000001);
}

TEST(lg, test2) {
	double result = lg(1);
	double expected = 0;
	ASSERT_DOUBLE_EQ(expected, result);
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
