#include "main.h"

namespace languages {
	void container::In(ifstream &ifst) {
		list* cur = new list;
		cur = cont;
		if (cont == NULL)
		{
			cont = new list;
			cur = cont;
		}
		else
		{
			while (cur->next != NULL)
				cur = cur->next;
			cur->next = new list;
			cur = cur->next;
		}
		list* prev = cur;
		while (!ifst.eof()) {
			if ((cur->language = lang::In(ifst)) != 0)
			{
				++NUM;
				prev = cur;
				cur->next = new list;
				cur = cur->next;
			}
		}
		prev->next = NULL;
	}
}