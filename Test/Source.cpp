#include "main.h"
#include "gtest/gtest.h"

using namespace languages;

bool CompareContainer(container *c1, container *c2)
{
	if (c1->NUM != c2->NUM)
		return false;
	list* cur1 = c1->cont; 
	list* cur2 = c2->cont;

	for (int i = 0; i < c1->NUM; ++i)
	{
		if (cur1->language->age != cur2->language->age || cur1->language->reference != cur2->language->reference)
			return false;
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	return true;
}


TEST(ProcedTest, ProcedIn)
{
	ifstream file("ProcedIn.txt");
	proced *actual = new proced, *expected;
	expected = new proced;
	actual->InData(file);
	expected->age = 1996;
	expected->abstr = false;
	expected->reference = 10000;
	EXPECT_TRUE((actual->abstr == expected->abstr));
}

TEST(ProcedTest, ProcedOut)
{
	ofstream file("ProcedOut.txt");
	proced* s = new proced;
	s->t = PROCED;
	s->abstr = true;
	s->age = 1991;
	s->Out(file);
	file.close();
	ifstream actualFile("ProcedOut.txt"), expectedFile("ProcedOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(LangTest, LangYearsOld)
{
	lang *actual;
	actual = new proced;
	((proced*)actual)->abstr = true;
	actual->age = 1991;
	EXPECT_TRUE(actual->YearsOld() == 2017 - 1991);
}

TEST(OOPTest, OOPIn)
{
	ifstream file("OOPIn.txt");
	oop *actual = new oop, *expected;
	expected = new oop;
	actual->InData(file);
	expected->t = OOP;
	expected->a = oop::inheritance::INTERF;
	EXPECT_TRUE(actual->a == expected->a);
	
}

TEST(OOPTest, OOPOut)
{
	ofstream file("OOPOut.txt");
	oop* p = new oop;
	p->t = OOP;
	p->age = 1991;
	p->a = oop::inheritance::INTERF;
	p->Out(file);
	file.close();
	ifstream actualFile("OOPOut.txt"), expectedFile("OOPOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(FunctionalTest, FunctionalIn)
{
	ifstream file("FunctionalIn.txt");
	functional *actual = new functional, *expected;
	expected = new functional;
	actual->InData(file);
	expected->lazycalc = true;
	expected->typ = functional::typification::DYNAMIC;
	EXPECT_TRUE(actual->lazycalc == expected->lazycalc || actual->typ == expected->typ);
}

TEST(FunctionalTest, FunctionalOut)
{
	ofstream file("FunctionalOut.txt");
	functional* t = new functional;
	t->lazycalc = 1;
	t->age = 1998;
	t->typ = functional::typification::DYNAMIC;

	t->Out(file);
	file.close();
	ifstream actualFile("FunctionalOut.txt"), expectedFile("FunctionalOutPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(InputLangTest, InputProcedInLang)
{
	ifstream file("InputProcedInLang.txt");
	lang *actual = new proced;
	actual = actual->In(file);
	lang *expected = new proced;
	((proced *)expected)->abstr = true;
	expected->age = 1950;
	expected->reference = 65000;
	EXPECT_TRUE(((proced *)expected)->abstr && ((proced *)actual)->abstr);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->reference == actual->reference);
	EXPECT_TRUE(expected->age == actual->age);
}

TEST(InputLangTest, InputOOPInLang)
{
	ifstream file("InputOOPInLang.txt");
	lang *actual = new oop;
	actual = actual->In(file);
	lang *expected = new oop;
	((oop *)expected)->reference = oop::inheritance::SINGLE;
	expected->age = 1990;
	expected->reference = 678000;
	EXPECT_TRUE(((oop *)expected)->reference == ((oop *)actual)->reference);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->age == actual->age);
	EXPECT_TRUE(expected->reference == actual->reference);
}

TEST(InputLangTest, InputFunctionalInLang)
{
	ifstream file("InputFunctionalInLang.txt");
	lang *actual = new functional;
	actual = actual->In(file);
	lang *expected = new functional;
	((functional *)expected)->lazycalc = false;
	((functional *)expected)->typ = functional::typification::EXACT;
	expected->age = 1995;
	expected->reference = 654000;
	EXPECT_TRUE(((functional *)expected)->lazycalc == ((functional *)actual)->lazycalc);
	EXPECT_TRUE(((functional *)expected)->typ == ((functional *)actual)->typ);
	EXPECT_TRUE(expected->t == actual->t);
	EXPECT_TRUE(expected->age == actual->age);
	EXPECT_TRUE(expected->reference == actual->reference);
}

TEST(OutputLangTest, LangProcedOutput)
{
	ofstream file("LangProcedOutput.txt");
	lang *expected = new proced;
	((proced *)expected)->abstr = false;

	expected->age = 1950;
	expected->reference = 65000;
	expected->Out(file);
	file.close();
	ifstream actualFile("LangProcedOutput.txt"), expectedFile("LangProcedOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputLangTest, LangOOPOutput)
{
	ofstream file("LangOOPOutput.txt");
	lang *s = new oop;
	(s)->t = OOP;
	((oop *)s)->a = oop::inheritance::MULTIPLE;
	s->age = 1920;
	s->reference = 700;
	s->Out(file);
	file.close();
	ifstream actualFile("LangOOPOutput.txt"), expectedFile("LangOOPOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputLangTest, LangFunctionalOutput)
{
	ofstream file("LangFunctionalOutput.txt");
	lang *s = new functional;
	((functional *)s)->lazycalc = false;
	((functional *)s)->typ = functional::typification::EXACT;
	s->age = 1950;
	s->reference = 6500;
	s->Out(file);
	file.close();
	ifstream actualFile("LangFunctionalOutput.txt"), expectedFile("LangFunctionalOutputPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}



TEST(LangCompareYearsOldTest, CompareYearsOldMore)
{
	lang *s1 = new functional;
	((functional*)s1)->age = 1993;

	lang *s2 = new functional;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(s1->Compare(s2));
}

TEST(LangCompareYearsOldTest, CompareYearsOldLess)
{
	lang *s1 = new functional;
	((functional*)s1)->age = 1991;

	lang *s2 = new functional;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(!s1->Compare(s2));
}

TEST(LangCompareYearsOldTest, CompareYearsOldEqually)
{
	lang *s1 = new functional;
	((functional*)s1)->age = 1992;

	lang *s2 = new functional;
	((functional*)s2)->age = 1992;
	EXPECT_TRUE(!s1->Compare(s2));
}


TEST(ClearContainerTest, ClearEmptyContainer)
{
	container *c = new container;
	c->cont = NULL;
	c->NUM = 0;

	c->ClearContainer();
	EXPECT_TRUE(c->cont == NULL);
	EXPECT_EQ(c->NUM, 0);
}

TEST(ClearContainerTest, ClearNonEmptyContainer)
{
	container *c = new container;
	c->cont = new list;
	c->cont->language;

	c->NUM = 1;

	c->ClearContainer();
	EXPECT_TRUE(c->cont == NULL);
	EXPECT_EQ(c->NUM, 0);
}

TEST(InputContainerTest, OneProcedInContainer)
{
	ifstream file("OneProcedInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	actual->In(file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new proced;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((proced*)expected->cont->language)->abstr = false;
	EXPECT_TRUE(CompareContainer(actual, expected));
}


TEST(InputContainerTest, OneOOPInContainer)
{
	ifstream file("OneOOPInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	actual->In(file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new oop;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((oop*)expected->cont->language)->a = oop::inheritance::MULTIPLE;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, OneFunctionalInContainer)
{
	ifstream file("OneFunctionalInContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	actual->In(file);
	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new functional;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((functional*)expected->cont->language)->lazycalc = true;
	((functional*)expected->cont->language)->typ = functional::typification::EXACT;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, NoElementsInContainer)
{
	//ifstream file("NoElementsInContainer.txt");
	container *actual = new container;
	actual->cont = NULL;
	actual->NUM = 0;
	//In(*actual, file);

	container *expected = new container;
	expected->cont = NULL;
	expected->NUM = 0;
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(InputContainerTest, SeveralElementsInContainer)
{
	ifstream file("SeveralElementsInContainer.txt");
	container *actual = new container;
	actual->cont = NULL;
	actual->NUM = 0;
	actual->In(file);

	container *expected = new container;
	ContainerPattern(expected);
	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(OutputContainerTest, SeveralElementsOutContainer)
{
	ofstream file("SeveralElementOutContainer.txt");
	container *actual = new container;
	ContainerPattern(actual);
	actual->Out(file);
	file.close();

	ifstream actualFile("SeveralElementOutContainer.txt"), expectedFile("SeveralElementOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneFunctionalOutContainer)
{
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new functional;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((functional*)actual->cont->language)->lazycalc = true;
	((functional*)actual->cont->language)->typ = functional::typification::EXACT;


	ofstream file("OneFunctionalOutContainer.txt");
	actual->Out(file);
	file.close();

	ifstream actualFile("OneFunctionalOutContainer.txt"), expectedFile("OneFunctionalOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneOOPOutContainer)
{
	ofstream file("OneOOPOutContainer.txt");
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new oop;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((oop*)actual->cont->language)->a = oop::inheritance::SINGLE;
	actual->Out(file);
	file.close();

	ifstream actualFile("OneOOPOutContainer.txt"), expectedFile("OneOOPOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, OneProcedOutContainer)
{
	ofstream file("OneProcedOutContainer.txt");
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new proced;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((proced*)actual->cont->language)->abstr = true;
	actual->Out(file);
	file.close();

	ifstream actualFile("OneProcedOutContainer.txt"), expectedFile("OneProcedOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}

TEST(OutputContainerTest, NoElementsOutContainer)
{
	//ofstream file("NoElementsOutContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;

	//Out(*actual, file);
//	file.close();

	ASSERT_FALSE(0);
//	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
//	actualFile.close();
//	expectedFile.close();
}

TEST(OutputContainerTest, OnlySeveralSpheresOutContainer)
{
	ofstream file("OnlySeveralSpheresOutContainer.txt");
	container *actual = new container;
	ContainerPattern(actual);
	actual->OutOnlyProced(file);
	file.close();

	ifstream actualFile("OnlySeveralSpheresOutContainer.txt"), expectedFile("OnlySeveralSpheresOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}


TEST(OutputContainerTest, NoProcedOutContainer)
{
	ofstream file("NoSpheresOutContainer.txt");
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = NULL;
	actual->OutOnlyProced(file);
	file.close();

	ifstream actualFile("NoProcedOutContainer.txt"), expectedFile("NoProcedOutContainerPattern.txt");
	ASSERT_FALSE(!actualFile);
	EXPECT_TRUE(CompareFiles(actualFile, expectedFile));
	actualFile.close();
	expectedFile.close();
}
/*
TEST(SortContainerTest, JustSortContainer)
{

	container *actual = new container;
	ContainerPattern(actual);
	actual->Sort();


	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(SortContainerTest, DoubleSortedContainer)
{
	container *actual = new container;
	ContainerPattern(actual);
	Sort(*actual);
	Sort(*actual);

	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(actual, expected));
}

TEST(SortContainerTest, OneProcedInContainer)
{
	container *actual = new container;
	actual->NUM = 1;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = new lang;
	actual->cont->language->t = PROCED;
	actual->cont->language->reference = 100000;
	actual->cont->language->age = 1950;
	((proced*)actual->cont->language)->abstr = true;
	Sort(*actual);

	container *expected = new container;
	expected->NUM = 1;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = new lang;
	expected->cont->language->t = PROCED;
	expected->cont->language->reference = 100000;
	expected->cont->language->age = 1950;
	((proced*)expected->cont->language)->abstr = true;
	EXPECT_TRUE(CompareContainer(actual, expected));
}


TEST(SortContainerTest, ReversedSortContainer)
{
	container *c = new container;
	c->NUM = 6;
	c->cont = new list;
	list* cur = c->cont;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1985;
	((oop*)cur->language)->a = oop::inheritance::MULTIPLE;
	((oop*)cur->language)->reference = 10500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = false;
	((proced*)cur->language)->age = 1990;
	((proced*)cur->language)->reference = 20000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((oop*)cur->language)->t = OOP;
	((oop*)cur->language)->age = 1991;
	((oop*)cur->language)->a = oop::inheritance::INTERF;
	((oop*)cur->language)->reference = 100000;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((proced*)cur->language)->t = PROCED;
	((proced*)cur->language)->abstr = true;
	((proced*)cur->language)->age = 1995;
	((proced*)cur->language)->reference = 500;

	cur = cur->next;
	cur->language = new lang;
	cur->next = new list;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = false;
	((functional*)cur->language)->age = 1997;
	((functional*)cur->language)->reference = 35400;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	cur = cur->next;
	cur->language = new lang;
	cur->next = NULL;
	((functional*)cur->language)->t = FUNCTIONAL;
	((functional*)cur->language)->lazycalc = true;
	((functional*)cur->language)->age = 1998;
	((functional*)cur->language)->reference = 354;
	((functional*)cur->language)->typ = functional::typification::DYNAMIC;

	Sort(*c);

	container *expected = new container;
	SortedContainerPattern(expected);

	EXPECT_TRUE(CompareContainer(c, expected));
}

TEST(SortContainerTest, NothingInContainer)
{
	container *actual = new container;
	actual->NUM = 0;
	actual->cont = new list;
	actual->cont->next = NULL;
	actual->cont->language = NULL;
	Sort(*actual);

	container *expected = new container;
	expected->NUM = 0;
	expected->cont = new list;
	expected->cont->next = NULL;
	expected->cont->language = NULL;

	EXPECT_TRUE(CompareContainer(actual, expected));
}
*/
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("pause");
	return 0;
}