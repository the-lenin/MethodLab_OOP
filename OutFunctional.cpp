#include "main.h"

namespace languages {
	void functional::Out(ofstream &ofst) {
		CheckOutFile(ofst);
		ofst << "It is Functional language: has ";
		switch (typ)
		{
		case 0:
			ofst << "exact";
			break;
		case 1:
			ofst << "dynamic";
			break;
		default:
			break;
		}
		ofst << " typification and ";
		if (lazycalc)
			ofst << "support 'lazy' calculating.";
		else
			ofst << "don't support 'lazy' calculating.";

	}
}
