/*5. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write
getters and setters for all the data members. Also add the display function. Create the object of this
class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class Point
{
	
	private:int x,y;
	
	public:
		
	Point()
	{
		cout<<"Default constructor"<<endl;
		x=2;
		y=3;
	}
	
	
	void createPoint(int a,int b)
	{
		cout<<"Parameterise constructor"<<endl;
		x=a;
		y=b;
		cout<<"---point created----"<<endl;
	}
	void assignPoint()
	{
		x=10;
		y=10;
		
	}
	
	void print()
	{
		cout<<"----display point-----"<<endl;
		cout<<"X-cord="<<x<<"  Y-cord="<<y<<endl;
	}
	
	void setX(int x)
	{
		this->x=x;
	}
	
	void setY(int y)
	{
		this->y=y;
	}
	
	int getX()
	{
		return x;
	}
	
	int getY()
	{
		return y;
	}
	
	
};


int main()
{
	Point p1;
	p1.print();//garbage
	
	
	cout<<"\n\nEnter X Y "<<endl;
	int x,y;
	cin>>x>>y;
	
	p1.createPoint(x,y);
	p1.print();
	
	
	
	cout<<"\n\nAfter using setter and getter"<<endl;
	
	p1.setX(20);
	p1.setY(25);
	p1.getX();
	p1.getY();
	p1.print();
	
	
	
	
	
}
