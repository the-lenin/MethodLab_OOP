#include "main.h"


namespace languages {
	void container::Out(ofstream &ofst) {
		CheckOutFile(ofst);
		ofst << "Container contains " << NUM << " elements." << endl;
		list* cur = cont;
		int s = 0;
		while (cur != NULL && s < NUM)
		{
			ofst << s + 1 << " :  ";

			cur->language->Out(ofst);

			ofst << " invented in " << cur->language->age << '.';
			ofst << " It is " << cur->language->YearsOld() << " years old." << endl;

			ofst << "\tLanguage mentioned in the Inet " << cur->language->reference << " times." << endl;

			cur = cur->next;
			++s;


		}

	}
}
