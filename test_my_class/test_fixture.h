
#include "gtest/gtest.h"



class TestFixture :public::testing::Test
{
protected:
	// �ϐ�
	int result_int;
	char result_char;


	SampleApp *sample_app;	//�e�X�g�ΏۃN���X


	// �e�X�g���s�O�ɃR�[�������Z�b�g�A�b�v����
	void SetUp() override;
	void TearDown() override;

	void TEST_F(SampleTest, GetXXXXX);
	void TEST_F(SampleTest, SetXXXXX);
}