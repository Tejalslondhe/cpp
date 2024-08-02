/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal 
and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes
 should have specific properties and methods related to their respective categories of animals.
*/

#include<iostream>
using namespace std;
class Animal
{
	protected:  int weight;
		string name;
		int age;
			
	public: 
	
	Animal()
	{
		weight = 200;
		name = "Animal";
		age = 50;
	}
	
	Animal(int weight,string name,int age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}	
	
	
	void accept(int weight,string name,int age)
	{
	this->weight=weight;
	this->name=name;
	this->age=age;
	}
	
	virtual void display()
	{
		cout<<"details are: weight= "<<weight<<"   name= "<<name<<"  age="<<age<<endl;
	}
	
};

class Mammal: public Animal
{
	
		
	public:
		Mammal()
		{
		}
		
	
	
	Mammal(int weight,string name,int age):Animal( weight, name, age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	
	
	
	void accept(int weight,string name,int age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	void walk()
	{
		cout<<"Mammals can walk"<<endl;
	}
	
	
	void display()
	{	
	cout<<"\n Details of mammals: weight= "<<weight<<"   name= "<<name<<"  age="<<age<<endl;	
	}
	
	
};

class bird: public Animal
{
	
		
	public:
		bird(){
		}
		
	
	
	bird(int weight,string name,int age):Animal( weight, name, age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	
	
	
	virtual void accept(int weight,string name,int age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	void fly()
	{
		cout<<"Birds can fly."<<endl;
	}
	
	
	void display()
	{	
	cout<<"\nDetails of bird: weight= "<<weight<<"   name= "<<name<<"  age="<<age<<endl;	
	}
	
	
};

class fish: public Animal
{
	
		
	public:
		fish(){
		}
		
	
	
	fish(int weight,string name,int age):Animal( weight, name, age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	
	
	
	void accept(int weight,string name,int age)
	{
		this->weight=weight;
		this->name=name;
		this->age=age;
	}
	
	void swim()
	{
		cout<<"Fish can swim."<<endl;
	}
	
	
	void display()
	{	
	cout<<"\nDetails of fish: weight= "<<weight<<"   name= "<<name<<"  age="<<age<<endl;	
	}
	
	
};

int main()
{
	Animal obj;
	obj.display();
	
	
	Mammal obj1;
	obj1.accept(100,"Lion",25);
	obj1.display();
	obj1.walk();
	
	
	bird obj2;
	obj2.accept(5,"Sparrow",3);
	obj2.display();
	obj2.fly();
	
	
	fish obj3;
	obj3.accept(1000,"Shark",15);
	obj3.display();
	obj3.swim();
	
}
	

