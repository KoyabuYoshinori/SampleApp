
#include "gtest/gtest.h"



class TestFixture :public::testing::Test
{
protected:
	// 変数
	int result_int;
	char result_char;


	SampleApp *sample_app;	//テスト対象クラス


	// テスト実行前にコールされるセットアップ処理
	void SetUp() override;
	void TearDown() override;

	void TEST_F(SampleTest, GetXXXXX);
	void TEST_F(SampleTest, SetXXXXX);
}