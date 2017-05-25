#pragma once
#include <fstream>

using namespace std;
namespace languages {
	class lang {
	public:
		typ t;
		short age;
	
		static lang* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ����
		virtual void Out(ofstream &ofst) = 0; // �����

		virtual void OutOnlyProced(ofstream &ofst);
	protected:
		lang() {};
	};
}