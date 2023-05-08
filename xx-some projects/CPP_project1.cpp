#include<iostream>
using namespace std;

/***********************Abstract-Class****************************************/
class Employee
{
	protected:			//protected --> to be accessed in the derived class
		string Name;
		int Emp_ID;
		double Salary;
	public:
		Employee():Name("unknow"),Emp_ID(0),Salary(0.0)
		{}
		Employee(string n, int id,double s):Name(n),Emp_ID(id),Salary(s)
		{}
		/*you can provid setters and getters function here too*/
		virtual double Get_total_salary() = 0 ;
		virtual void print () = 0 ;
};
/***************************************************************************/

class Sales : public Employee
{
	private:
		float Gross_sales;
		float Commission_rate;
	public:
		Sales(string n, int id,double s,float gs,float cr):Employee(n,id,s),Gross_sales(gs),Commission_rate(cr)
		{}
		/*setters and getters for Local attributes*/
		void Set_GrossSales(float g)
		{
			Gross_sales=g;
		}
		void Set_CommissionRate(float c)
		{
			Commission_rate=c;
		}
		/*2 pure virtual functions implementation*/
		 double Get_total_salary()
		 {
			return (Salary +(Gross_sales * Commission_rate));
		 }
		 void print ()
		 {	cout<<"*******************************\n";
			cout<<"the sales employee Name is :"<<Name<<endl;
			cout<<"the ID is :"<<Emp_ID<<endl;
			cout<<"the Salary is :"<<Salary<<endl;
			cout<<"the Gross sales id:"<<Gross_sales<<endl;
			cout<<"the commission rate id:"<<Commission_rate<<endl;
			cout<<"the total salary is : "<<(Salary +(Gross_sales * Commission_rate))<<endl;
		 }
};
class Engineer : public Employee
{
	private:
		string Speciality;
		int Exp;
		int OT_hrs;
		float OT_hrs_rate;
	public:
		Engineer(string n, int id,double s,string spec,int exp,int oth,float othr):Employee(n,id,s),Speciality(spec),Exp(exp),OT_hrs(oth),OT_hrs_rate(othr)
		{}
		/*setters and getters for Local attributes*/
		void Set_OT_hrs(float ot)
		{
			OT_hrs=ot;
		}
		void Set_OT_hrs_rate(float ot_r)
		{
			OT_hrs_rate=ot_r;
		}
		/*2 pure virtual functions implementation*/
		double Get_total_salary()
		 {
			return (Salary +(OT_hrs * OT_hrs_rate));
		 }
		 void print ()
		 {	cout<<"*******************************\n";
			cout<<"the sales employee Name is :"<<Name<<endl;
			cout<<"the ID is :"<<Emp_ID<<endl;
			cout<<"the Salary is :"<<Salary<<endl;
			cout<<"the speciality is : "<<Speciality<<endl;
			cout<<"the experiance years is :"<<Exp<<endl;
			cout<<"the over time hrs is : "<<OT_hrs<<endl;
			cout<<"the over time rate  is :"<<OT_hrs_rate<<endl;
			cout<<"the total salary is :"<<(Salary +(OT_hrs * OT_hrs_rate))<<endl; 
		 }
};




int main()
{
	/*calling method-1 using dot operator*/
	/*
	Sales s1("ahmed",1,5500,5,44.5);
	s1.print();
	
	Engineer e1("Adel",10,40000,  "electrical engineer",2,60,100);
	e1.print();
	*/
	
	/*calling method-2 using ptrs -to show the idea of polymprphism-*/
	
	Employee* emp_ptr=NULL;
	Sales s1("ahmed",1,5500,500,0.1);
	emp_ptr=&s1;
	emp_ptr->print();
	
	Engineer e1("Adel",10,40000,  "electrical engineer",2,60,100);
	emp_ptr=&e1;
	emp_ptr->print();
		
	return 0;
}