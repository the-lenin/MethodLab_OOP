#pragma once
#include <fstream>

using namespace std;
namespace languages {
	class lang {
	public:
		typ t;
		short age;

		int YearsOld();
		static lang* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ����
		virtual void Out(ofstream &ofst) = 0; // �����
	protected:
		lang() {};
	};
}