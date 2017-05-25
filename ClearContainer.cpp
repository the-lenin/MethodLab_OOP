#include "main.h" 

namespace languages {
	void container::ClearContainer() {
		list* a;
		while (cont != NULL && NUM > 0)
		{
			a = cont->next;
			delete cont;
			cont = a;
			--NUM;
		}
		NUM = 0;
		cont = NULL;
	}
}