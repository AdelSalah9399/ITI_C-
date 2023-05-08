#include<iostream>
using namespace std;

class car
{
private:
	string  maker;
	int 	model;
	
	static int counter;
	
public:
	void SetMaker(string name);
	void SetModel(int mod);
	string GetMaker(void);
	int GetModel(void);
	
	int GetCounter(void);
	static void printcar(void);
	
	/*default initial value*/
	car();
	/*user defined initial value*/
	car(string name,int mod);
	~car();
};