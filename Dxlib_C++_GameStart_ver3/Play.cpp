//Play.cpp
//�v���C��ʂ̏���

//################# �w�b�_�t�@�C���ǂݍ��� #################
#include "Play.hpp"

//################ �N���X��` ################

//�R���X�g���N�^
Play::Play()
{

}

//�f�X�g���N�^
Play::~Play()
{

}

//�f�[�^�Ǎ�
bool Play::DataLoad()
{
	return true;
}

//�v���C��ʂ̏���
void Play::PlayScene()
{
	//****************************** �����n ********************************
	if (keydown->IsKeyDownOne(KEY_INPUT_RETURN))		//�G���^�[�L�[�������ꂽ��
	{
		NowScene = SCENE_END;	//�G���h��ʂ�
	}

	//***************************** �`��n *********************************
	DrawString(TEST_TEXT_X, TEST_TEXT_Y, PLAY_TEXT, GetColor(255, 255, 255));	//�e�X�g�p�̃e�L�X�g��`��

}