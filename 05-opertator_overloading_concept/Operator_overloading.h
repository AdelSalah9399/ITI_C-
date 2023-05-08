#include<iostream>
using namespace std;


class counter
{
private:
	int count;
public:
	int GetCount(void);
	
	/***************Unary Operators********************/
	/*prefix*/
	counter operator ++()
	{
		++count;
		return counter(count); //return **new object** with class counter with initial value count 
	}
	counter operator --()
	{
		--count;
		return counter(count); //return **new object** with class counter with initial value count 
	}
	/*postfix*/
	counter operator ++(int)
	{
		count++;
		return counter(count); //return **new object** with class counter with initial value count 
	}
	counter operator --(int)
	{
		count--;
		return counter(count); //return **new object** with class counter with initial value count 
	}
	/***************Binary Operators*******************/
	counter operator +(counter c2) 
	{
		int c = count + c2.count;
		return counter(c);
	}
	counter operator -(counter c2) 
	{
		int c = count - c2.count;
		return counter(c);
	}
	counter operator *(counter c2) 
	{
		int c = count * c2.count;
		return counter(c);
	}
	counter operator /(counter c2)
	{
		int c = count / c2.count;
		return counter(c);
	}
	/**********************************/
	counter();
	counter(int init);
	~counter();
};