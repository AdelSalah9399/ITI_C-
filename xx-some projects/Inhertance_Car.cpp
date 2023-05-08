#include <iostream>
using namespace std;

/***********************************************SUPER-CLASS***********************************************************/
class vehicle
{
	private:
		int vec_ID;
		string vec_Manufact;
	public:
		void set_ID(int id)
		{
			vec_ID=id;
		}
		void set_manu(string m)
		{
			vec_Manufact=m;
		}
		int Get_ID()
		{
			return vec_ID;
		}
		string Get_manu()
		{
			return vec_Manufact;
		}
		void Display()
		{
			cout<<"**************************\n";
			cout<<"vec ID is :"<<vec_ID<<endl;
			cout<<"vec manufacture is :"<<vec_Manufact<<endl;
		}
		vehicle():vec_ID(0),vec_Manufact("non")
		{}
		vehicle(int id,string m):vec_ID(id),vec_Manufact(m)
		{}
	
};
/***********************************************PARENT-1***********************************************************/
				class Transportation : public vehicle
				{
					private:
						int Load_Cap;
					public:
						void Display()
						{
							vehicle::Display();
							cout<<"load capacity is "<<Load_Cap<<endl;
							
						}
						Transportation():vehicle(),Load_Cap(0)
						{}
						Transportation(int id,string m,int l):vehicle(id,m),Load_Cap(l)
						{}
						
				};
/***********************************************chiled-1 of parnt-1***********************************************************/

									class Truck : public Transportation
									{
										private:
											int container_num;
										public:
											void Display()
											{
												Transportation::Display();
												cout<<"container number is "<<container_num<<endl;
												
											}
											Truck():Transportation(),container_num(0)
											{}
											Truck(int id,string m,int l,int c):Transportation(id,m,l),container_num(c)
											{}
											
									};
/***********************************************PARENT-2***********************************************************/

				class Passenger : public vehicle
				{
					private:
						int pass_num;
					public:
						void Display()
						{
							vehicle::Display();
							cout<<"passenger number is "<<pass_num<<endl;
						}
						Passenger():vehicle(),pass_num(0)
						{}
						Passenger(int id,string m,int p):vehicle(id,m),pass_num(p)
						{}
						
				};
/***********************************************chiled-1 of parnt-2***********************************************************/
									class car : public Passenger
									{
										private:
											int doors_num;
										public:
											void Display()
											{
												Passenger::Display();
												cout<<"doors number is "<<doors_num<<endl;
												
											}
											car():Passenger(),doors_num(0)
											{}
											car(int id,string m,int p,int d):Passenger(id,m,p),doors_num(d)
											{}
											
									};
/***********************************************chiled-2 of parnt-2***********************************************************/

									class bike : public Passenger
									{
										private:
											int hight;
										public:
											void Display()
											{
												Passenger::Display();
												cout<<"hight is "<<hight<<endl;
												
											}
											bike():Passenger(),hight(0)
											{}
											bike(int id,string m,int p,int h):Passenger(id,m,p),hight(h)
											{}
											
									};
int main()
{
	/*************************************super-class**************************/
	
	vehicle car1(1885,"lanos");
	car1.Display();
	
	/*************************************parents**************************/
	
	Transportation car2(1995,"lada",85);
	car2.Display();
	
	
	Passenger car3(2141,"mezda",6);
	car3.Display();
	
	/*************************************childs**************************/
	
	Truck car4(1995,"MAN",85,4);
	car4.Display();

	
	car car5(5447,"Mercides-Benz",5,4);
	car5.Display();
	
	
	bike car6(1234,"Halawa",2,1);
	car6.Display();
	
	
	
	
	return 0;
}