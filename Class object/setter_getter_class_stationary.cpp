
#include<iostream>
#include<string.h>
using namespace std;

class stationary
{
	public:
	 
			int pen,book,notebook;
			double total1;
			
			
			void total()
			{
				total1 = pen+book+notebook;
			}
			
			
				
			
	public: 
	
	stduent()
	{
		pen=10;book=150;notebook=50;
	}
	
	
	
	student(int pen,int book,int notebook)
	{
		
		
		this->pen = pen;
		this->book = book;
		this->notebook = notebook;
		
	}

	void accept(int pen,int book,int notebook)
	{	
		cout<<"--get assigned--";
		
		this->pen = pen;
		this->book = book;
		this->notebook = notebook;
	}
	
	void display()
{
	cout<<"Pen price = "<<pen<<" Book price =  "<<book<<" Notebook price=  "<<notebook<<" Total bill = "<<total1<<endl;
}

void setPen(int pen)
{
	this->pen=pen;
}

int getPen()
{
	return this->pen;
}
	
	
};

 
int main()
{
	
	
		stationary obj1;		
//		cout<<"---The class is---";
//		cout<<"Enter the price:"<<endl;
//	
//		
//		cin>>obj.pen;
//		cin>>obj.book;
//		cin>>obj.notebook;	

	
	
	//obj.accept(10,150,50);
	obj1.total();
	obj1.display();
	cout<<"change the values"<<endl;
	obj1.setPen(20);
	obj1.getPen();
	obj1.display();
	
	
}
