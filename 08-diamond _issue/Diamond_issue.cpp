#include<iostream>
using namespace std;

class Animal
{
	private:
		string name;
	public:
		void set_A_name(string n)
		{
			name=n;
		}
		void Display(void)
		{
			cout<<"the Animal name is :"<<name<<endl;
		}
};


class Mannal : virtual public Animal
{
		private:
		string mannal_name;
		public:
		void set_M_name(string n)
		{
			mannal_name=n;
		}
		void Display(void)
		{
			Animal::Display();
			cout<<"the Mannal name is :"<<mannal_name<<endl;
		}
};

class Bird : virtual public Animal
{
		private:
		string Bird_name;
		public:
		void set_B_name(string n)
		{
			Bird_name=n;
		}
		void Display(void)
		{
			Animal::Display();
			cout<<"the Bird name is :"<<Bird_name<<endl;
		}
};

class Duck : public Mannal , public Bird
{

		public:
		/*those are inhereted functions --note that class_Animal inherted twice--*/
		//set_A_name();
		//set_M_name();
		//set_A_name();
		//set_B_name();
		void Display(void)
		{
			cout<<"*************************\n";
			Mannal::Display();
			Bird::Display();
			cout<<"*************************\n";
		}	
};


int main()
{
	
	Duck d1;
	
	//d1.Mannal::set_A_name("lotfy");
	//d1.Bird::set_A_name("lotfy");	
	
	d1.set_A_name("wezza");
	d1.set_B_name("bird");
	d1.set_M_name("mannal");

	d1.Display();
	
	return 0;
}