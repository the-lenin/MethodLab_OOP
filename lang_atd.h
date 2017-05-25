#pragma once
#include <fstream>
#include "typ_atd.h"

using namespace std;
namespace languages {
	class lang {
	public:
		typ t;
		short age;
		int YearsOld();
		int reference;
	
		static lang* In(ifstream &ifst);
		bool Compare(lang *l);
		virtual void InData(ifstream &ifst) = 0; // ввод
		virtual void Out(ofstream &ofst) = 0; // вывод
	protected:
		lang() {};
	};
}