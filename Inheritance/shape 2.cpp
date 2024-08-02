#include<iostream>
using namespace std;
class shape{
	protected: float area,peri;
	
	public:
	
	shape()
	{
		area=0;
	}
	
	void cal_area()
	{
		
	}
	
	void cal_peri()
	{
		
	}
	
	void display()
	{
			
	}
};

class circle:public shape{
	
	private: int radius;
	
	public:
	
	circle()
	{
		radius = 0;
	}
	
	citcle(int radius)
	{
		this->radius=radius;
	}
	
	void accept(int radius)
	{
		this->radius=radius;
		
	}
	
	
	void cal_area(){
		
		area = 3.142*radius*radius;
		
	}
	
	void cal_peri()
	{
		peri = 2*3.142*radius;
	}
	
	void display()
	{
		cout<<"Area of circle:"<<area<<endl;
		cout<<"Perimeter of the circle"<<peri<<endl;
	}
};


class rectangle:public shape{
	
	private: float length;
		float breadth;
	
	public:
	
	rectangle()
	{
		length = 0;
		breadth = 0;
	}
	
	rectangle(float length,float breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
	
	void accept(float length,float breadth)
	{
		this->length=length;
		this->breadth=breadth;	
	}
	
	void cal_area(){
		
		area = length*breadth;
		
	}
	
	void cal_peri()
	{
		peri = (length+breadth)*2;
	}
	
	void display()
	{
		cout<<"Area of the rectangle is :"<<area<<endl;
		cout<<"Perimeter of the rectangle is :"<<peri<<endl;
	}
};

class triangle:public shape{
	
	private: float base;
		float height;
		float side1,side2;
	
	public:
	
	triangle()
	{
		base = 0;
		height = 0;
		side1=side2=0;
	}
	
	triangle(float base,float height,float side1, float side2)
	{
		this->base=base;
		this->height=height;
		this->side1=side1;
		this->side2=side2;
		
	}
	
	void accept(float base,float height,float side1, float side2)
	{
		this->base=base;
		this->height=height;
		this->side1=side1;
		this->side2=side2;	
	}
	
	void cal_area(){
		
		area = (base*height)*0.5;
		
	}
	
	void cal_peri()
	{
		peri = side1+base+side2;	
	}
	
	void display()
	{
		cout<<"Area of the triangle is :"<<area<<endl;
		cout<<"Perimeter of the triangle is :"<<peri<<endl;
	}
};

int main()
{
	shape shp;
	shp.cal_area();
	shp.cal_peri();
	shp.display();
	
	cout<<"\nAbout Circle:"<<endl;
	circle crl;
	crl.accept(5);
	crl.cal_area();
	crl.cal_peri();
	crl.display();
	
	cout<<"\nAbout rectangle:"<<endl;
	rectangle rect;
	rect.accept(2,3);
	rect.cal_area();
	rect.cal_peri();
	rect.display();
	
	cout<<"\n About triangle:"<<endl;
	triangle tri;
	tri.accept(2,3,4,5);
	tri.cal_area();
	tri.cal_peri();
	tri.display();
	
//	cout<<"\n\nUsing array"<<endl;
//	int i;
//	shape* area[4];
//	area[0]=&crl;
//	area[1]=&rect;
//	area[2]=&tri;
//	
//	for(i=0;i<4;i++)
//	{
//		area[i]->cal_area();
//		area[i]->cal_peri();
//		area[i]->display();
//	}
	
		
}
