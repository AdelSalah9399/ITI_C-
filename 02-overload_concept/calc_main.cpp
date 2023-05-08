#include<iostream>
using namespace std;

#include "calc.h"



int main()
{

	calco c1;
	
	cout<<"\n"<<c1.add(5, 6)<<"\n";
	cout<<c1.add(5,6,7)<<"\n";
	cout<<c1.add(5.2,6)<<"\n";
	cout<<c1.add("adel","salah")<<"\n";
	//cout<<c1.add(5.2,6.1,5.1)<<"\n";
	return 0;
}


