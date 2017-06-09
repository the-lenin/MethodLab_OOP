#include "oop_atd.h"
#include "proced_atd.h"
#include "lang_atd.h"
#include "container_atd.h"
#include "typ_atd.h"
#include "list_atd.h"
#include "container_atd.h"
#include "functional_atd.h"


#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>


using namespace std;
using namespace languages;

void CheckInFile(ifstream &file);
void CheckInValue(ifstream &file);
void CheckNegative(float value);
void CheckOutFile(ofstream &file);

bool CompareFiles(ifstream &f1, ifstream &f2);
void ContainerPattern(container *c);

void SortedContainerPattern(container *c);







