/*4. Create a class Book with data members as bname, id, author, price. Write getters and setters for all the
data members. Also add the display function. Create Default and Parameterized constructors. Create
the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;

class Book{
	
	public: string bname;
			string author;
			int price;
			
			
	person()
	{
		bname = "Impossible Is Possible"; author="ABC"; price=500;
	}
			
	person(string bname, string author, int price)
	{
		this->bname=bname;
		this->author=author;
		this->price=price;	
	}
	
	
	
	
	void accept(string bname, string author, int price)
	{
		cout<<"Parameterize constructor\n";
		
		this->bname=bname;
		this->author=author;
		this->price=price;
	}
	
	void setName(string newName)
	{
		this->bname=newName;		
	}
	
	void setAuthor (string author)
	{
		this->author=author;		
	}
	
	void setPrice(int price)
	{
		this->price=price;		
	}
	
	string getName()
	{
		return bname;
	}
	
	string getAuthor()
	{
		return author;
	}
	
	int getPrice()
	{
		return price;
	}
	
	
			
	void display()
	{
		cout<<"Book Name: "<<bname<<endl<<"Author: "<<author<<endl<<"Price: "<<price<<endl;
	}
			
	
			
};

int main()
{
	Book obj;
	obj.accept("Who I am?","XYZ",360);
	obj.display();
	cout<<"\n\n Using setter and getter"<<endl;
	obj.setName("Wings of Fire");
	obj.setAuthor("Abdul Kalam");
	obj.setPrice(400);
	obj.getName();
	obj.getAuthor();
	obj.getPrice();
	obj.display();
}
