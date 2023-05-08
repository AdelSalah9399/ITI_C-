#include <iostream>
using namespace std;


class shape
{
	private:
		string color;
	public:
		shape(string c):color(c)
		{}
		void set_color(string c)
		{
			color=c;
		}
		string set_color()
		{
			return color;
		}
		virtual float get_area()  //Veeeeery IMPORTANT -- VIRTUAL->to tell the compiler that this func. will be overrided
		{
			cout<<"parent class area : "<<endl;
		}
};

class Rec : public shape
{
	private:
		float length;
		float width;
	public:
		Rec(string c,float l,float w):shape(c),length(l),width(w)
		{}
		set_length(float l)
		{
			length=l;
		}
		set_width(float w)
		{
			width=w;
		}
		float get_area()
		{
			cout<<"Rectangle class area : "<<(length*width)<<endl;
			return (length*width);
		}
};
class Box : public shape
{
	private:
		float side_length;
	public:
		Box(string c,float l):shape(c),side_length(l)
		{}
		set_sidelength(float l)
		{
			side_length=l;
		}
		float get_area()
		{
			cout<<"Box class area : "<<(side_length*4)<<endl;
			return (side_length*4);
		}
};
class Circle : public shape
{
	private:
		float radius;
	public:
		Circle(string c,float r):shape(c),radius(r)
		{}
		set_radius(float r)
		{
			radius=r;
		}
		float get_area()
		{
			cout<<"Circle class area : "<<(3.14*radius*radius)<<endl;
			return (3.14*radius*radius);
		}
};


int main()
{
	shape* ptr=NULL;
	
	Rec    r("black",5,4);
	Box    b("red",4);
	Circle c("blue",2);
	
	//ptr=&r;
	//ptr->get_area();
	//(OR)
	r.get_area();
	
	ptr=&b;
	ptr->get_area();
	
	ptr=&c;
	ptr->get_area();
	
	
	return 0;
}