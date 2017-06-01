#include "main.h"


namespace languages {
	lang* lang::In(ifstream &ifst) {
		CheckInFile(ifst);
		lang *l;
		int k;
		ifst >> k;
		CheckInValue(ifst);
		CheckNegative(k);
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
		CheckInValue(ifst);
		CheckNegative(l->age);
		l->InData(ifst);
		ifst >> l->reference;
		CheckInValue(ifst);
		CheckNegative(l->reference);
		return l;
	}
}