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
		case 2:
			l = new functional;
			break;
		default:
			return 0;
		}
		ifst >> l->age;
		l->InData(ifst);
		ifst >> l->reference;
		return l;
	}
}