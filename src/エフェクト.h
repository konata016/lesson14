#pragma once
#include <vector>
#include "共通.h"

namespace エンジン {
	class レンダリングサービス;

	struct エフェクトデータ {
		float2 位置;
		float2 速度;
		bool 死んだ;
	};

	class エフェクト
	{
	public:
		エフェクト();
		~エフェクト();

		void 初期化(unsigned int 最大数, unsigned int リソースID, レンダリングサービス& レンダリングサービス);
		void 片付け();
		void リセット();

		void 更新(float 経過時間, レンダリングサービス& レンダリングサービス);
		void 更新後処理();
		void 描画(レンダリングサービス& レンダリングサービス);

	private:
		unsigned int リソースID_ = 0;
		unsigned int 個数_ = 0;

	};
}

