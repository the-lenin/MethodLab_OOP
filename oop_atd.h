#pragma once

#include "typ_atd.h"
#include "lang_atd.h"


namespace languages {
	class oop : public lang {
		enum inheritance { single, multiple, interf };
		inheritance a;
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		oop() {} // �������� ��� �������������.
	};
}