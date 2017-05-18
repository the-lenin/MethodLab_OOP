#pragma once

#include "shape_type.h"
#include "shape_atd.h"



namespace shapes {
	class parallelepiped : public shape {
		int e1, e2, e3;
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		void MultiMethod(shape *other, ofstream &f);
		void MultiMethodCaseSphere(ofstream &f);
		void MultiMethodCaseParallelepiped(ofstream &f);
		parallelepiped() {} // �������� ��� �������������.
	};
}