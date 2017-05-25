#include <stdio.h>
#include "lang_atd.h"


namespace languages {
	bool lang::Compare(lang *l)
	{
		if (YearsOld() < l->YearsOld())
			return 1;
		else
			return 0;
	}
}