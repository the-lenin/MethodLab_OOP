#include "main.h"

using namespace languages;

void main(int argc, char* argv[]) {
	if (argc != 3)
		{
			cout << "incorrect command line! "
				"Waited: command in_file out_file"
				<< endl;
			exit(1);
		}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Sort();
	c.Out(ofst);
	c.OutOnlyProced(ofst);
	c.ClearContainer();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	cout << "Stop" << endl;
	
}