#pragma once

#include "lang_atd.h"

namespace languages {
	class proced : public lang {
		bool abstr;
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		void OutOnlyProced(ofstream &ofst);

		void MultiMethod(lang *other, ofstream &file);
		void MultiMethodCaseOOP(ofstream &file);
		void MultiMethodCaseProced(ofstream &file);
		void MultiMethodCaseFunctional(ofstream &file);

		proced() {} // �������� ��� �������������.
	};
}