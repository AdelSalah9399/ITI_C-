#include <iostream>
using namespace std;


class person
{
	private:
		string name;
		string gender;
		int age;
	public:
		void set_name(string n)
		{
			name=n;
		}
		void set_gender(string g)
		{
			gender=g;
		}
		void set_age(int a)
		{
			age=a;
		}
		/*method-1 to print data using member function*/
		void Display()
		{
			cout<<"name is "<<name<<endl;
			cout<<"gender is "<<gender<<endl;
			cout<<"age is "<<age<<endl;
		}
		/*friend function*/
		friend void print(person p);
		
		/*friend class*/
		friend class friend_class;
		
};
/********************************************************************************************/
		/*method-2 to print data using >friend function<*/
void print(person p)
{
	cout<<"name is "<<p.name<<endl;
	cout<<"gender is "<<p.gender<<endl;
	cout<<"age is "<<p.age<<endl;
}
/********************************************************************************************/
		/*>friend class<*/
class friend_class
{

public:
	void print2(person p2)
	{
	cout<<"name is "<<p2.name<<endl;
	cout<<"gender is "<<p2.gender<<endl;
	cout<<"age is "<<p2.age<<endl;
	}
	
};
/********************************************************************************************/

int main()
{
	person x;
	x.set_name("adel");
	x.set_gender("male");
	x.set_age(24);
	
	friend_class x2;
	
	print(x);
	cout<<"***************\n";
	x.Display();
	cout<<"***************\n";
	x2.print2(x);
	
 return 0;
}