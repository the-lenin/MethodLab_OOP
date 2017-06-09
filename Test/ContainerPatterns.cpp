#include "main.h"
using namespace languages;
void ContainerPattern(container *c)
{
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	
	cur->next = new list;
	cur->language = new functional;
	((functional*)cur->language)->lazycalc = true;
	((functional*)cur->language)->age = 1998;
	((functional*)cur->language)->reference = 354;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;
	cur = cur->next;


	cur->next = new list;
	cur->language = new proced;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;

	cur->next = new list;
	cur->language = new functional;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	
	cur->next = new list;
	cur->language = new oop;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a =oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;
	
	cur = cur->next;

	cur->next = new list;
	cur->language = new proced;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->next = NULL;
	cur->language = new oop;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;


}

void SortedContainerPattern(container *c)
{
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	cur->next = new list;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;

	cur = cur->next;
	cur->next = new list;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->next = new list;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a = oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;

	cur = cur->next;
	cur->next = new list;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;
	cur->next = new list;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	cur->next = NULL;
	((functional*)cur->language)->lazycalc = true;
	((functional*)cur->language)->age = 1998;
	((functional*)cur->language)->reference = 354;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

}

