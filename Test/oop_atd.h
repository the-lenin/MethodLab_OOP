#pragma once

#include "typ_atd.h"
#include "lang_atd.h"


namespace languages 
{
	class oop : public lang 
	{
		
	public:
		enum inheritance { SINGLE, MULTIPLE, INTERF };
		inheritance a;
		
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		oop() {} // �������� ��� �������������.
	};
}