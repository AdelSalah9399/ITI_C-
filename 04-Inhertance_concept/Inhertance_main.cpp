#include<iostream>
using namespace std;

//#include "Inhertance.h"
#include "Inhertance_derived_class.h"

int main()
{
	student s1("Dolla","Male",24,3.9);  //noteeeeeee 
	s1.Display();
	
	Engineer e1("electrical");
	e1.Display();
	
	EngPerson ep1("Dolla","Male",24,"electrical",40000);
	ep1.Display();
	
	return 0;
}