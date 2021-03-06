//Scene.cpp

//############# ヘッダファイル読み込み ###############
#include "Scene.hpp"

//############## クラス定義 ################

int Scene::NowScene = 0;	//現在のシーン
KeyDown* Scene::keydown = new KeyDown();	//キー入力
bool Scene::IsGameStart = false;			//ゲームスタートできるか

//コンストラクタ
Scene::Scene(){}

//デストラクタ
Scene::~Scene(){}

//キー更新
void Scene::KeyUpdate()
{
	keydown->KeyDownUpdate();
}

//現在のシーンを取得
int Scene::GetNowScene()
{
	return NowScene;
}
