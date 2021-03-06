//Scene.hpp
//各シーンの基になるクラス

#pragma once

//################### ヘッダファイル読み込み ######################
#include "Global.hpp"
#include "Keydown.hpp"

//################### マクロ定義 #########################
//テキスト関係
#define LOAD_TEXT	"NowLoading…"		//ロード画面のテキスト
#define PUSH_TEXT	"PushEnter"			//エンターキーを押す、のテキスト
#define TITLE_TEXT	"NowTitle"			//タイトル画面のテキスト
#define PLAY_TEXT	"NowPlay"			//プレイ画面のテキスト
#define END_TEXT	"NowEnd"			//エンド画面のテキスト

//座標関係
#define TEST_TEXT_X	30					//テスト用のテキスト描画X位置
#define TEST_TEXT_Y	30					//テスト用のテキスト描画Y位置

//################### 列挙型 #####################
enum GAME_SCENE
{
	SCENE_LOAD,			//ロードシーン
	SCENE_TITLE,		//タイトルシーン
	SCENE_PLAY,			//プレイシーン
	SCENE_END			//エンドシーン
};

//################### クラス定義 #########################
class Scene
{
protected:

	static int NowScene;		//現在のシーン
	static KeyDown* keydown;	//キー
	static bool IsGameStart;	//ゲームスタートできるか

public:

	Scene();		//コンストラクタ
	~Scene();		//デストラクタ

	static void KeyUpdate();	//キー更新

	static int GetNowScene();	//現在のシーンを取得

	virtual bool DataLoad() = 0;	//シーンごとの読み込み
	virtual void PlayScene() = 0;	//シーン毎の処理

};
