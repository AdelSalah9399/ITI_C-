
#include "calc.h"
/*********************************************************************dont forger >>>>>>calco::<<<<<<<<**********************/
	int calco::add(int num1,int num2)
	{
		return num1+num2;
	}
	int calco::add(int num1,int num2,int num3)
	{
		return num1+num2+num3;
	}
	float calco::add(float num1,float num2)
	{
		return num1+num2;
	}
	float calco::add(float num1,float num2,float num3)
	{
		return num1+num2+num3;
	}
	string calco::add(string a,string b)
	{
		return a + " " + b;
	}
	calco::calco()
	{
		cout<<"welcome";
	}
	calco::~calco()
	{
		cout<<"goodbye";
	}