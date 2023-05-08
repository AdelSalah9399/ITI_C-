
#include "Operator_overloading.h"

	int counter::GetCount(void)
	{
		return count;
	}

	counter::counter():count(0)
	{}
	counter::counter(int init):count(init)
	{}
	counter::~counter()
	{}