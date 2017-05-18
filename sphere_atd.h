#pragma once

#include "shape_type.h"
#include "shape_atd.h"


namespace shapes {
	class sphere : public shape {
		int rad;
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst); // ����
		void Out(ofstream &ofst); // �����
		void MultiMethod(shape *other, ofstream &f);
		void MultiMethodCaseSphere(ofstream &f);
		void MultiMethodCaseParallelepiped(ofstream &f);
		sphere() {} // �������� ��� �������������.
	};
}