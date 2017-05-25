#pragma once

#include "typ_atd.h"
#include "lang_atd.h"


namespace languages {
	class oop : public lang {
		enum inheritance { single, multiple, interf };
		inheritance a;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		oop() {} // создание без инициализации.
	};
}