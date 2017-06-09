#include "main.h"

namespace languages {
	void container::MultiMethod(ofstream &file)
	{
		file << "Multimethod:" << endl;
		list *temp1 = cont;
		list *temp2 = cont->next;
		while (temp1->next != NULL)
		{
			temp2 = cont->next;
			while (temp2 != NULL)
			{
				temp1->language->MultiMethod(temp2->language, file);
				temp1->language->Out(file);
				temp2->language->Out(file);
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
		}
	}
		void oop::MultiMethod(lang *other, ofstream &file)
		{
			other->MultiMethodCaseOOP(file);
		}

		void proced::MultiMethod(lang *other, ofstream &file)
		{
			other->MultiMethodCaseProced(file);
		}

		void functional::MultiMethod(lang *other, ofstream &file)
		{
			other->MultiMethodCaseFunctional(file);
		}

		void oop::MultiMethodCaseProced(ofstream &file)
		{
			file << "OOP and Procedure" << endl;
		}

		void oop::MultiMethodCaseOOP(ofstream &file)
		{
			file << "OOP and OOP" << endl;
		}

		void oop::MultiMethodCaseFunctional(ofstream &file)
		{
			file << "Functional and OOP" << endl;
		}

		void proced::MultiMethodCaseProced(ofstream &file)
		{
			file << "Procedure and Procedure" << endl;
		}

		void proced::MultiMethodCaseOOP(ofstream &file)
		{
			file << "Procedure and OOP" << endl;
		}

		void proced::MultiMethodCaseFunctional(ofstream &file)
		{
			file << "Functional and Procedure" << endl;
		}

		void functional::MultiMethodCaseProced(ofstream &file)
		{
			file << "Functional and Procedure" << endl;
		}

		void functional::MultiMethodCaseOOP(ofstream &file)
		{
			file << "Functional and OOP" << endl;
		}

		void functional::MultiMethodCaseFunctional(ofstream &file)
		{
			file << "Functional and Functional" << endl;
		}
}