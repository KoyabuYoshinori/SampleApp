
#include "pch.h"
#include "test_fixture.h"


void TestFixture::SetUp()
{
	// �e�X�g�P�[�X�O�̏���������
	result_int = 0;
	result_char = "";

	// �e�X�g�ΏۃN���X�̐���
	sample_app = new SampleApp();

}

void TestFixture::TearDown()
{
	// �e�X�g�̌㏈��
	delete sample_app;
	sample_app = nullptr;

}

void TestFixture::TEST_F(SampleTest, GetXXXXX)
{


}


void TestFixture::TEST_F(SampleTest, SetXXXXX)
{


}