#include "main.h"

namespace languages {
	void oop::InData(ifstream &ifst) {
		int inh;
		ifst >> inh;
		switch (inh)
		{
		case 0:
			a = oop::inheritance::single;
			break;
		case 1:
			a = oop::inheritance::multiple;
			break;
		case 2:
			a = oop::inheritance::interf;
			break;
		default:
			break;
		}
	}
}