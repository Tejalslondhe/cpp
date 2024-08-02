/*Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students within an educational institution. Create a base class Person with attributes like name and age. Derive a Student class with additional attributes like student ID and GPA, inheriting the common attributes from the Person class.
*/

#include<iostream>
using namespace std;

class person{
	
	public:string name;
		int age;
			
			
	person()
	{	
		name = "ram"; age=24;
	}
			
	person(string name, int age)
	{
		this->name=name;
		this->age=age;	
	}
	
	
	
	
	void accept(string name, int age)
	{
		
		this->name=name;
		this->age=age;
	}
	
	
	
			
	void display()
	{
		cout<<"Name: "<<name<<"  Age: "<<age<<endl;
	}
			
	
			
};

class stud:public person{
	
	private: int stud_ID;
		int GPA;
		
	public:
		stud()
		{
			stud_ID = 0;
			GPA = 0;
		}
		
		stud(string name, int age,int stud_ID,int GPA):person(name,age)
		{
			this->stud_ID = stud_ID;
			this->GPA = GPA;	
		}
		
		void display()
		{
			person::display();
			cout<<"Student ID:"<<stud_ID<<"   GPA:"<<GPA<<endl;
		}
		
		
		
		
};

int main()
{
	person obj;
	
	
	stud s("Ram",21,201,9.3);
	s.display();
	
	
}
