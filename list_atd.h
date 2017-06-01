#pragma once

#include "typ_atd.h"
#include "lang_atd.h"

namespace languages 
{
	struct list 
	{
		lang *language;
		list* next;
	};
}
