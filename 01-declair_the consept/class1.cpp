
#include "class1.h"



int car::counter =0;

	void 	car::SetMaker(string name)
	{
		maker=name;
	}
	void 	car::SetModel(int mod)
	{
		model=mod;
	}
	string  car::GetMaker(void)
	{
		return maker;
	}
	int 	car::GetModel(void)
	{
		return model;
	}
	
	
	int car::GetCounter(void)
	{
		return counter;
	}
	void car::printcar(void)
	{
		cout<<"car\n";
	}
	/*****************constructor---initial value---*******************/
	
	/*method1-low speed-default initial value-*/
	//car::car()
	//{
	//	maker="Lanos";
	//	model=2004;
	//}
	/*method1-high speed-default initial value-*/
	car::car():	maker("Lanos"),model(2004)
	{
		counter++;
	}
	
	/*method3-user -high speed- user defined initialization-*/
	car::car(string name,int mod): maker(name),model(mod)
	{
		counter++;
	}
	
	
	car::~car()
	{
		cout<<"goodby\n";
		counter--;
	}