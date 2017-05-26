#include "main.h"


namespace languages {
	void container::Out(ofstream &ofst) {
		ofst << "Container contains " << NUM << " elements." << endl;
		list* cur = cont;
		int s = 0;
		while (cur != NULL && s < NUM)
		{
			ofst << s + 1 << " :  ";

			cur->language->OutData(ofst);

			cur = cur->next;
			++s;


		}

	}
}
