#pragma once

#include "lang_atd.h"

namespace languages {
	class proced : public lang {
		bool abstr;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		proced() {} // создание без инициализации.
	};
}