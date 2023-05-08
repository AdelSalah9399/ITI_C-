#include <iostream>
using namespace std;


class person
{
	private:
		string Name;
		string Gender;
		float Age;
	
	public:
		person();
		person(string n,string g,float a);
		
		void SetName(string n);
		string GetName();
		void SetGender(string g);
		string GetGender();
		void SetAge(float a);
		float GetAge();
		void Display();
};


class Engineer
{
	private:
		string specialize;
	public:
		void set_speci(string s)
		{
				specialize=s;
		}
		string get_speci(void)
		{
			return specialize;
		}
		void Display()
		{
			cout<<"the specialize is :"<<specialize<<endl;
		}
		
		Engineer():specialize("non")
		{}
		Engineer(string s):specialize(s)
		{}
	
};