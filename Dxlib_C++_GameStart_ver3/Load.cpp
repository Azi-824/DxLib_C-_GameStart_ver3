//Load.cpp
//ロード画面のクラス

//############## ヘッダファイル読み込み #################
#include "Load.hpp"

//############## クラス定義 ################

//コンストラクタ
Load::Load()
{

}

//デストラクタ
Load::~Load(){}

//データ読込
bool Load::DataLoad()
{
	return true;
}

//読み込み画面の処理
void Load::PlayScene()
{
	//***************************** 処理系 ************************************
	if (IsGameStart)	//ゲームスタートできるなら
	{
		if (keydown->IsKeyDownOne(KEY_INPUT_RETURN))		//エンターキーを押されたら
		{
			NowScene = SCENE_TITLE;	//タイトル画面へ
		}
	}

	if (GetASyncLoadNum() == 0)	//非同期で読み込んでいる処理が終わったら
	{

		SetUseASyncLoadFlag(FALSE);	//同期読み込みに設定

		IsGameStart = true;		//ゲームスタートできる
	}

	//********************************* 描画系 ************************************
	if (IsGameStart)	//ゲームスタートできるなら
	{
		DrawString(TEST_TEXT_X, TEST_TEXT_Y, PUSH_TEXT, GetColor(255, 255, 255));	//プッシュ、のテキストを描画
	}
	else		//できないなら
	{
		DrawString(TEST_TEXT_X, TEST_TEXT_Y, LOAD_TEXT, GetColor(255, 255, 255));	//読み込み中のテキストを描画
	}


}
