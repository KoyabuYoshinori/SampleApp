
#include "pch.h"
#include "test_fixture.h"


void TestFixture::SetUp()
{
	// テストケース前の初期化処理
	result_int = 0;
	result_char = "";

	// テスト対象クラスの生成
	sample_app = new SampleApp();

}

void TestFixture::TearDown()
{
	// テストの後処理
	delete sample_app;
	sample_app = nullptr;

}

void TestFixture::TEST_F(SampleTest, GetXXXXX)
{


}


void TestFixture::TEST_F(SampleTest, SetXXXXX)
{


}