#include "pch.h"
#include "../SampleApp.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(MyClassTest, AddTest)
{
	SampleApp sample_class;
	EXPECT_EQ(sample_class.add(1, 2), 5);
}