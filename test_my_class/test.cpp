#include "pch.h"
#include "gtest/gtest.h"
#include "../SampleApp.h"
//#include "test_fixture.h"


TEST(TestCaseName, TestName1)
{
  EXPECT_EQ(1, 1);
}

TEST(TestCaseName, TestName2)
{
	EXPECT_TRUE(true);
}

TEST(MyClassTest, AddTest1)
{
	SampleApp sample_class;
	EXPECT_EQ(sample_class.add(1, 2), 5);
}

TEST(MyClassTest, AddTest2)
{
	SampleApp sample_class;
	EXPECT_EQ(sample_class.add(2, 4), 10);
}

TEST(MyClassTest, AddTest3)
{
	EXPECT_FALSE(false);
}

TEST(MyClassTest, AddTest4)
{
	EXPECT_TRUE(false);
}