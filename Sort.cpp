#include "main.h"


namespace languages 
{
	void container::Sort(bool descendingly)
	{
		for (int i = 0; i < NUM - 1; i++) 
		{
			list* cur = cont;
			for (int j = i + 1; j < NUM; j++) 
			{
				if (descendingly)
				{
					if (cur->language->Compare(cur->next->language))
					{
						lang *tmp = cur->language;
						cur->language = cur->next->language;
						cur->next->language = tmp;
					}
				}
				else
				{
					if (!cur->language->Compare(cur->next->language))
					{
						lang *tmp = cur->language;
						cur->language = cur->next->language;
						cur->next->language = tmp;
					}
				}
				cur = cur->next;
			}
		}
	}
}