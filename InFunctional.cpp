#include "main.h"

namespace languages {
	void functional::InData(ifstream &ifst) {
		CheckInFile(ifst);
		int typific;
		ifst >> typific;
		CheckInValue(ifst);
		CheckNegative(typific);
		if (typific > 2)
		{
			cout << "Error. Incorrect value in typific." << endl;
			system("pause");
			exit(1);
		}
		ifst >> lazycalc;
		CheckInValue(ifst);
		CheckNegative(lazycalc);
		if (lazycalc > 2)
		{
			cout << "Error. Incorrect values. Lazycalc can be 0 or 1." << endl;
			system("pause");
			exit(1);
		}
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