/*2. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class person{
	
	public: string name;
			int age;
			string city;
			
			
	person()
	{	cout<<"Default constructor"<<endl;
		name = "ram"; age=24;city="Pune";
	}
			
	person(string name, int age,string city)
	{
		this->name=name;
		this->age=age;
		this->city=city;	
	}
	
	
	
	
	void accept(string name, int age,string city)
	{
		cout<<"\n\nEnter the values\n";
		
		this->name=name;
		this->age=age;
		this->city=city;
	}
	
	void setName(string newName)
	{
		this->name=newName;		
	}
	
	void setAge(int age)
	{
		this->age=age;		
	}
	
	void setCity(string city)
	{
		this->city=city;		
	}
	
	string getName()
	{
		return name;
	}
	
	int getAge()
	{
		return age;
	}
	
	string getCity()
	{
		return city;
	}
	
	
			
	void display()
	{
		cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"City: "<<city<<endl;
	}
			
	
			
};

int main()
{
	person obj;
	obj.display();
	
	obj.accept("Tejal",23,"pune");
	obj.display();
	
	cout<<"\n\n Using setter and getter"<<endl;
	obj.setName("Rohan");
	obj.setAge(10);
	obj.setCity("Nagar");
	obj.getName();
	obj.getAge();
	obj.getCity();
	obj.display();
}
