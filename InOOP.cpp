#include "main.h"

namespace languages 
{
	void oop::InData(ifstream &ifst) 
	{
		CheckInFile(ifst);
		int inh;
		ifst >> inh;
		CheckInValue(ifst);
		CheckNegative(inh);
		if (inh > 3)
		{
			cout << "Error. Incorrect value: inheritance." << endl;
			system("pause");
			exit(1);
		}
		switch (inh)
		{
		case 0:
			a = oop::inheritance::SINGLE;
			break;
		case 1:
			a = oop::inheritance::MULTIPLE;
			break;
		case 2:
			a = oop::inheritance::INTERF;
			break;
		default:
			break;
		}
	}
}