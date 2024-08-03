#include<iostream>
using namespace std;
class shape{
	protected: float area,peri;
	
	public:
	
	shape()
	{
		area=0;
		peri = 0;
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
	
	circle(int radius)
	{
		this->radius=radius;
	}
	
	
	void area_crcl()
	{
		
		area = 3.142*radius*radius;
		
	}
	
	void peri_crcl()
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
	
	
	
	void area_rect(){
		
		area = length*breadth;
		
	}
	
	void peri_rect()
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
	
	
	void area_tri(){
		
		area = (base*height)*0.5;
		
	}
	
	void peri_tri()
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
	
	
	cout<<"\nAbout Circle:"<<endl;
	circle crl(5);
	crl.area_crcl();
	crl.peri_crcl();	
	crl.display();
	
	cout<<"\nAbout rectangle:"<<endl;
	rectangle rect(2,3);
	rect.area_rect();
	rect.peri_rect();
	rect.display();
	
	cout<<"\n About triangle:"<<endl;
	triangle tri(2,3,4,5);
	tri.area_tri();
	tri.peri_tri();
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
