//main.hpp

#pragma once


//#################### ヘッダファイル読み込み #####################
#include "DxLib.h"

//########## マクロ定義 ##########
#define GAME_COLOR	32		//画面のカラービット
#define GAME_FPS_SPEED					   60

#define GAME_WINDOW_NAME	"居合"				//ウィンドウのタイトル
#define GAME_WINDOW_MODECHANGE	TRUE			//TRUE：ウィンドウモード / FALSE：フルスクリーン

#define SET_WINDOW_ST_MODE_DEFAULT			0	//デフォルト
#define SET_WINDOW_ST_MODE_TITLE_NONE		1	//タイトルバーなし
#define SET_WINDOW_ST_MODE_TITLE_FLAME_NONE	2	//タイトルバーとフレームなし
#define SET_WINDOW_ST_MODE_FLAME_NONE		3	//フレームなし

//############## プロトタイプ宣言 #############
bool GameLoop();			//ゲームのループ
void AddScene();			//シーン追加
void Delete_Class();		//クラスを削除する処理
