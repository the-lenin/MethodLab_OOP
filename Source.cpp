#include "main.h"

using namespace languages;

void main(int argc, char* argv[]) 
{
	if (argc != 3)
	{
		cout << "Error. Incorrect command!" << endl;
		return;
	}

	ifstream ifst(argv[1]);
	CheckInFile(ifst);
	ifst.seekg(0, std::ios::end);
	int fileSize = ifst.tellg();
	ifst.seekg(0, std::ios::beg);
	if (fileSize == 0)
	{
		cout << "Error. Input file is empty." << endl;
		system("pause");
		exit(0);
	}


	cout << "Start" << endl;
	container c;
	c.In(ifst);

	ofstream ofst(argv[2]);
	CheckOutFile(ofst);

	ofst << "Filled container. " << endl;
	c.Sort();
	c.Out(ofst);
	c.OutOnlyProced(ofst);
	c.MultiMethod(ofst);
	c.ClearContainer();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	
}