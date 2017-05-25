#include "main.h"


namespace languages {
	lang* lang::In(ifstream &ifst) {
		lang *l;
		int k;
		ifst >> k;
		switch (k) {
		case 0:
			l = new oop;
			break;
		case 1:
			l = new proced;

			break;
		default:
			return 0;
		}
		ifst >> l->age;
		l->InData(ifst);

		return l;
	}
}