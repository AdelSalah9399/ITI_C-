#include<iostream>
using namespace std;

#include "class3.h"


int main()
{
	Distance d1(11,5.2);
	Distance d4(11,7);
	Distance d2(d1);
	Distance d3=d4;
	
	/****************************passing object as method argument*******************/
	Distance d5;
	Distance d6;
	d6 = d1.ADD_FEET_INCH(d5);
	/*******************************************************************************/
	
	cout<<d1.GetFeet()<<"\n";
	cout<<d2.GetFeet()<<"\n";
	cout<<d3.GetFeet()<<"\n";
	
	cout<<d6.GetFeet()<<"\n";
	cout<<d6.GetInch()<<"\n";
	
	return 0;
}