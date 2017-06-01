#include "main.h"

namespace languages 
{
	void proced::InData(ifstream &ifst) 
	{
		CheckInFile(ifst);
		ifst >> abstr;
		CheckInValue(ifst);
		CheckNegative(abstr);
		if (abstr > 2)
		{
			cout << "Error. Incorrect value: abstractive." << endl;
			system("pause");
			exit(1);
		}
	}
}