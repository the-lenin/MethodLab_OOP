#include "main.h"

namespace languages {
	void functional::InData(ifstream &ifst) {
		int typific;
		ifst >> age >> typific >> lazycalc;
		switch (typific)
		{
			case 1:
				typ = functional::typification::DYNAMIC;
				break;
			case 0:
				typ = functional::typification::EXACT;
				break;
			default:
				break;
		}
	}
}