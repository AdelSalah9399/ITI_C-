

#include "Inhertance.h"

class student : public person 
{
	private:
		float GPA;

	public:
		student(string n,string g,float a,float G):person(n,g,a),GPA(G) //noteeeeeeeeeeeeeeeeeeeee      
		{}
		void Display()
		{
			person::Display();
			
			cout<<"GPA:"<<GPA<<endl;
			cout<<"***************\n";
		}
};


class EngPerson : public person , public Engineer
{
	
	private:
		int salary;
	public:
		EngPerson(string n,string g,float a     ,string s    ,int sal):person(n,g,a),Engineer(s),salary(sal)
		{}
		void Display()
		{
			person::Display();
			Engineer::Display();
			cout<<"the salary is :"<<salary<<endl;
		}
};
