#pragma once
#include <vector>
#include "����.h"

namespace �G���W�� {
	class �����_�����O�T�[�r�X;

	struct �G�t�F�N�g�f�[�^ {
		float2 �ʒu;
		float2 ���x;
		bool ����;
	};

	class �G�t�F�N�g
	{
	public:
		�G�t�F�N�g();
		~�G�t�F�N�g();

		void ������(unsigned int �ő吔, unsigned int ���\�[�XID, �����_�����O�T�[�r�X& �����_�����O�T�[�r�X);
		void �Еt��();
		void ���Z�b�g();

		void �X�V(float �o�ߎ���, �����_�����O�T�[�r�X& �����_�����O�T�[�r�X);
		void �X�V�㏈��();
		void �`��(�����_�����O�T�[�r�X& �����_�����O�T�[�r�X);

	private:
		unsigned int ���\�[�XID_ = 0;
		unsigned int ��_ = 0;

	};
}

