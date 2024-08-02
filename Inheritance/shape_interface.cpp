#include<iostream>
using namespace std;
class shape{
	protected: float area;
	
	public:
	
	shape()
	{
		area=0;
	}
	
	 int cal_area()
	 {
	 	return area;
	 }
	 
	 virtual void display()
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
	
	
	int cal_area(){
		
		area = 3.142*radius*radius;
		return area;
		
	}
	
	void display(){
		cout<<area;
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
	
	int cal_area(){

		
		area = length*breadth;
	
		return area;
		
	}
	void display(){
		cout<<area;
	}
	
};

class triangle:public shape{
	
	private: float base;
		float height;
		
	
	public:
	
	triangle()
	{
		base = 0;
		height = 0;
	}
	
	triangle(float base,float height)
	{
		this->base=base;
		this->height=height;
		
		
	}
	
	void accept(float base,float height)
	{
		this->base=base;
		this->height=height;
		
	}
	
	int cal_area(){
	
		area = (base*height)*0.5;
		return area;
		
	}
	void display(){
		cout<<area;
	}

};

int main()
{
	
	
	cout<<"\nAbout Circle:"<<endl;
	circle crl;
	crl.accept(4);
	crl.cal_area();
	crl.display();
	

	
	cout<<"\nAbout rectangle:"<<endl;
	rectangle rect;
	rect.accept(1,7);
	rect.cal_area();
	rect.display();
	
	
	cout<<"\nAbout triangle:"<<endl;
	triangle tri;
	tri.accept(2,5);
	tri.cal_area();
	tri.display();

	
	cout<<"\n\nsorting using array"<<endl;
	int area[10];
	area[0]=crl.cal_area();
	area[1]=rect.cal_area();
	area[2]=tri.cal_area();
	
	
	int i,j,temp;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)	
	{
		if(area[i]>area[j])
		{
			temp=area[i];
			area[i]=area[j];
			area[j]=temp;
		}
		
	}
	 for(i<0;i<3;i++)
	 {
	 	cout<<area[i]<<endl;
	 }
}
	
		
}
