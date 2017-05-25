#pragma once

#include <fstream>
#include "typ_atd.h"
#include "list_atd.h"
#include "lang_atd.h"
using namespace std;

namespace languages {
	class container {
		int NUM; // ������� �����
		list *cont;
	public:
		void In(ifstream &ifst); // ���� �����
		void Out(ofstream &ofst); // ����� �����
		void ClearContainer(); // ������� ���������� �� �����
		virtual void OutOnlyProced(ofstream &ofst);
		container() { cont = NULL; NUM = 0; }; // ������������� ����������
		~container() { ClearContainer(); } // ���������� ����������
	};
}