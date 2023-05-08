#include<iostream>
using namespace std;


class Distance
{
private:
	int inch;
	float feet;
	
public:
	void  SetInch(int in);
	void  SetFeet(float ft);
	int   GetInch(void);
	float GetFeet(void);
	/****************************passing object as method argument*******************/
	Distance ADD_FEET_INCH(Distance d2);
	/********************************************************************************/
	Distance();
	Distance(int in,float ft);
};