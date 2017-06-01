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

		// переопределяем интерфейс класса
		void InData(ifstream &ifst); // ввод
		void Out(ofstream &ofst); // вывод
		functional() {} // создание без инициализации.
	};
}