#pragma once

#include "lang_atd.h"

namespace languages {
	class proced : public lang {
		
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		void OutOnlyProced(ofstream &ofst);
		proced() {} // �������� ��� �������������.
		bool abstr;
		
	};
}