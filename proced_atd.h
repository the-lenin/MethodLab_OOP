#pragma once

#include "lang_atd.h"

namespace languages {
	class proced : public lang {
		bool abstr;
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		void OutOnlyProced(ofstream &ofst);

		void MultiMethod(lang *other, ofstream &file);
		void MultiMethodCaseOOP(ofstream &file);
		void MultiMethodCaseProced(ofstream &file);
		void MultiMethodCaseFunctional(ofstream &file);

		proced() {} // создание без инициализации.
	};
}