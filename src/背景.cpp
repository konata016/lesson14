#include "背景.h"
#include "サービス・レンダリング.h"


namespace エンジン {
	背景::背景()
	{
	}


	背景::~背景()
	{
	}

	void 背景::更新(float 経過時間, レンダリングサービス& レンダリングサービス) {
		const レンダリングサービス::情報& 画面情報 = レンダリングサービス.情報取得();
		//float2 画面サイズ(画面情報.画面サイズ[0], 画面情報.画面サイズ[1]);

		y += 背景速度 * 経過時間;
		if (y > 460)y = 10;
	}

	void 背景::描画(レンダリングサービス& レンダリングサービス) {
		
		レンダリングサービス.描画_リサイズ(リソースID_, x, y, 3);
	
	}

}
