#include "main.h"

namespace languages {
	void lang::OutData(ofstream &ofst) {

		Out(ofst);

		ofst << " invented in " << age << '.';
		ofst << " It is " << YearsOld() << " years old." << endl;

		ofst << "\tLanguage mentioned in the Inet " << reference << " times." << endl;

	}

}