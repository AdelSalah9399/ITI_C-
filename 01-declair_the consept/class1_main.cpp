#include<iostream>
using namespace std;

#include "class1.h"


int main()
{
	/*user defined initialization*/
	car c1("toyota",2020);
	//c1.SetMaker("HONDA");
	//c1.SetModel(2010);
	car c2("fiat",2021);
	
	car c10;
	cout<<"the static counter c10 = "<<c10.GetCounter()<<"\n";
	car c20;
	cout<<"the static counter c20 = "<<c20.GetCounter()<<"\n";
	car c30;
	cout<<"the static counter c30 = "<<c30.GetCounter()<<"\n";
	
	cout<<c1.GetMaker()<<"\n"<<c1.GetModel()<<"\n";
	cout<<c2.GetMaker()<<"\n"<<c2.GetModel()<<"\n";

	car::printcar(); //static method calling.
	return 0;
}