//Play.hpp
//�v���C��ʂ̏���

#pragma once

//############### �w�b�_�t�@�C���ǂݍ��� ##############
#include "Scene.hpp"

//############### �}�N����` #################

//############### �N���X��` #################
class Play : public Scene	//Scene�N���X���p��
{
private:

public:

	Play();		//�R���X�g���N�^
	~Play();	//�f�X�g���N�^

	bool DataLoad() override;	//�f�[�^�Ǎ�
	void PlayScene() override;	//�v���C��ʂ̏���

};