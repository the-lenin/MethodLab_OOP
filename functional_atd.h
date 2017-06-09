#pragma once

#include "lang_atd.h"

namespace languages 
{
	class functional : public lang 
	{
	public:

		enum typification { EXACT, DYNAMIC };
		typification typ;
		bool lazycalc;

		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����

		void MultiMethod(lang *other, ofstream &file);
		void MultiMethodCaseOOP(ofstream &file);
		void MultiMethodCaseProced(ofstream &file);
		void MultiMethodCaseFunctional(ofstream &file);

		functional() {} // �������� ��� �������������.
	};
}