#include "main.h"

namespace languages {
	void proced::Out(ofstream &ofst) {
		ofst << "This is Procedural language: ";
		if (abstr)
			ofst << "have abstract types of data, ";
		else
			ofst << "don't have abstract types of data, ";

	}
}
