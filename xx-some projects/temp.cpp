#include<iostream> 
using namespace std;


class rectangle
{
private:
	float length;
	float width;
public:	
	void SetLength(float len)
	{
		if(len>=0)
			length=len;
		else
			cout<<"error,negative value";
	}
	void SetWidth(float w)
	{
		if(w>=0)
			width=w;
		else
			cout<<"error,negative value";
	}
	float GetLength(void)
	{
		return length;
	}
	float GetWidth(void)
	{
		return width;
	}
	float GetArea(void)
	{
		return length*width;
	}
};

int main()
{
	rectangle rec1;
	rec1.SetLength(5.5);
	rec1.SetWidth(5.6);
	cout<<rec1.GetArea()<<"\n";
	
	
	return 0;
}