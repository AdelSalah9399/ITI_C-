#include<iostream>
using namespace std;

#include "Operator_overloading.h"


int main()
{
	counter c1(5),c2(10);
	
	counter c3 = ++c1;
	cout<<c3.GetCount()<<endl;
	counter c4 = --c2;
	cout<<c4.GetCount()<<endl;
	
	counter c10(5),c20(10);

	counter c5 = c10++;
	cout<<c5.GetCount()<<endl;
	counter c6 = c20--;
	cout<<c6.GetCount()<<endl;

	counter c100(5),c200(10);

	counter c7=c100+c200;
	cout<<c7.GetCount()<<endl;
	c7=c100-c200;
	cout<<c7.GetCount()<<endl;

	counter c1000(5),c2000(10);
	
	counter c8=c1000*c2000;
	cout<<c8.GetCount()<<endl;
	c8=c1000/c2000;
	cout<<c8.GetCount()<<endl;

	
	return 0;
}