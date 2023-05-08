
#include "class3.h"


	void Distance::SetInch(int in)
	{
		inch=in;
	}
	void Distance::SetFeet(float ft)
	{
		feet=ft;
	}
	int Distance::GetInch(void)
	{
		return inch;
	}
	float Distance::GetFeet(void)
	{
		return feet;
	}
	/****************************passing object as method argument*******************/
	Distance Distance::ADD_FEET_INCH(Distance d2)
	{
		Distance res;
		res.feet = feet + d2.feet;
		res.inch = inch + d2.inch;
		return res;  //return an object with class Distance with the new added values
	}
	/*******************************************************************************/
	
	Distance::Distance():inch(1),feet(1)
	{}
	Distance::Distance(int in,float ft):inch(in),feet(ft)
	{}
	