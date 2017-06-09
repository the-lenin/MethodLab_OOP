#include "main.h"

namespace languages 
{
	void oop::Out(ofstream &ofst) 
	{
		CheckOutFile(ofst);
		ofst << "It is OOP language:  has ";
		switch (a)
		{
		case 0:
			ofst << "single";
			break;
		case 1:
			ofst << "multiple";
			break;
		case 2:
			ofst << "interface";
			break;
		default:
			break;
		}
		ofst << " inharitance,";
	}
}

