//Scene.cpp

//############# �w�b�_�t�@�C���ǂݍ��� ###############
#include "Scene.hpp"

//############## �N���X��` ################

int Scene::NowScene = 0;	//���݂̃V�[��
KeyDown* Scene::keydown = new KeyDown();	//�L�[����
bool Scene::IsGameStart = false;			//�Q�[���X�^�[�g�ł��邩

//�R���X�g���N�^
Scene::Scene(){}

//�f�X�g���N�^
Scene::~Scene(){}

//�L�[�X�V
void Scene::KeyUpdate()
{
	keydown->KeyDownUpdate();
}

//���݂̃V�[�����擾
int Scene::GetNowScene()
{
	return NowScene;
}