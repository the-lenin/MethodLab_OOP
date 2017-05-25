#pragma once

#include <fstream>
#include "typ_atd.h"
#include "list_atd.h"
#include "lang_atd.h"
using namespace std;

namespace languages {
	class container {
		
	public:
		int NUM; // ������� �����
		list *cont;

		void In(ifstream &ifst); // ���� �����
		void Out(ofstream &ofst); // ����� �����
		void ClearContainer(); // ������� ���������� �� �����
		container() { cont = NULL; NUM = 0; }; // ������������� ����������
		~container() { ClearContainer(); } // ���������� ����������
	};
}