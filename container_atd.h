#pragma once

#include <fstream>
#include "typ_atd.h"
#include "list_atd.h"
#include "lang_atd.h"
using namespace std;

namespace languages 
{
	class container 
	{
		
	public:
		int NUM; // текущая длина
		list *cont;

		void Sort();
		void In(ifstream &ifst); // ввод фигур
		void Out(ofstream &ofst); // вывод фигур
		void ClearContainer(); // очистка контейнера от фигур

		virtual void OutOnlyProced(ofstream &ofst);


		container() { cont = NULL; NUM = 0; }; // инициализация контейнера
		~container() { ClearContainer(); } // утилизация контейнера
	};
}