/*--+----1----+----2----+----3----+----4----+----5-----+----6----+----7----+----8----+----9----+---*/
/* KeyDown.cpp     																				   */
/* KeyDownクラス																				   */
/* 一つのインスタンスのみにする																	   */

#pragma once

//########## ヘッダーファイル読み込み ##########
#include "Global.hpp"

//########## クラスの定義 ##########

class KeyDown
{
private:
	static char AllKeyState[256];		//すべてのキーの状態が入る	//staticは、共通の変数を使用する

public:
	static VOID KeyDownUpdate(VOID);	//キーの入力状態を更新する	//staticは、共通の関数を使用する

	//キーを押しているか、キーコードで判断する
	//引　数：キーコード
	BOOL IsKeyDown(int);

	bool IsKeyDownOne(int);	//キーを押した瞬間だけtrueを返す
	bool IsKeyInput();		//キー入力があるか取得
	int GetInputKeyCode();	//入力中のキーコードを取得

public:
	KeyDown();			//コンストラクタ
	virtual ~KeyDown();	//デストラクタ
};


