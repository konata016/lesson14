#pragma once
#include <vector>
#include "����.h"
#include "�T�[�r�X�E�����_�����O.h"

#define �}�[�W�� 9
#define �w�i���x 20

namespace �G���W�� {

	class �����_�����O�T�[�r�X;

	class �w�i
	{

	private:
		unsigned int ���\�[�XID_ = RID_BG;
		float x = �}�[�W��, y = �}�[�W��;

	public:
		�w�i();
		~�w�i();

		void �X�V(float �o�ߎ���, �����_�����O�T�[�r�X& �����_�����O�T�[�r�X);
		void �`��(�����_�����O�T�[�r�X& �����_�����O�T�[�r�X);
	};
}

