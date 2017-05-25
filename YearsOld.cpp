#include "main.h"
#include <time.h>


namespace languages {
	int lang::YearsOld()
	{
		time_t t;
		struct tm *n;
		time(&t);
		n = localtime(&t);
		int years = n->tm_year - age + 1900;
		return years;
	}
}