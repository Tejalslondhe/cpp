/*6. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized
constructors. Write getters and setters for all the data members. Also add the display function. Create
the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class Complexno
{
	
	private:int x,y;
	
	public:
		
	Complexno()
	{
		cout<<"Default constructor"<<endl;
		x=2;
		y=3;
	}
	
	Complexno(int x,int y)
	{
		cout<<"Parameterize constructor"<<endl;
		this->x=x;
		this->y=y;
	}
	
	
	
	void assignPoint(int x,int y)
	{
		this->x=x;
		this->y=y;	
		
	}
	
	void print()
	{
		cout<<"----display point-----"<<endl;
		cout<<"Z = "<<x<<"+i"<<y<<endl;
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
	Complexno p1;
	p1.print();//garbage
	
	
	cout<<"\n\nEnter X Y "<<endl;
	int x,y;
	cin>>x>>y;
	p1.assignPoint(x,y);
	p1.print();//
	
	
	
	cout<<"\n\nAfter using setter and getter"<<endl;
	
	p1.setX(20);
	p1.setY(25);
	p1.getX();
	p1.getY();
	p1.print();
	
	
	
	
	
}
