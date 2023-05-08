
#include "Inhertance.h"



		void person::SetName(string n)
		{
			Name=n;
		}
		string person::GetName()
		{
			return Name;
		}
		void person::SetGender(string g)
		{
			Gender=g;
		}
		string person::GetGender()
		{
			return Gender;
		}
		void person::SetAge(float a)
		{
			Age=a;
		}
		float person::GetAge()
		{
			return Age;
		}
		void person::Display()
		{
			cout<<"*******************************\n";
			cout<<"Name:"<<Name<<endl;
			cout<<"Gender:"<<Gender<<endl;
			cout<<"Age:"<<Age<<endl;
		}
		person::person(): Name("non"),Gender("non"),Age(0)
		{}
		person::person(string n,string g,float a): Name(n),Gender(g),Age(a)
		{}
		