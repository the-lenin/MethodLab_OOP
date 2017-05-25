#include "main.h"


namespace languages {
	void lang::OutOnlyProced(ofstream &ofst) {
		ofst << endl;
	}

	void proced::OutOnlyProced(ofstream &ofst) {
		Out(ofst);
		ofst << " invented in " << age << '.';
		ofst << endl;
	}

	void container::OutOnlyProced(ofstream &ofst) {
		list* cur = new list;
		cur = cont;
		ofst << "Only procedure." << endl;
		for (int i = 0; i < NUM; i++) {
			ofst << i << ": ";
			cur->language->OutOnlyProced(ofst);
			
			cur = cur->next;

		}
	}
}