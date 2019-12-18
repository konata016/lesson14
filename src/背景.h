#pragma once
#include <vector>
#include "共通.h"
#include "サービス・レンダリング.h"

#define マージン 9
#define 背景速度 20

namespace エンジン {

	class レンダリングサービス;

	class 背景
	{

	private:
		unsigned int リソースID_ = RID_BG;
		float x = マージン, y = マージン;

	public:
		背景();
		~背景();

		void 更新(float 経過時間, レンダリングサービス& レンダリングサービス);
		void 描画(レンダリングサービス& レンダリングサービス);
	};
}

