/*Copy constructer*/

#include<iostream>
#include<string.h>
using namespace std;
 class Account{
 	
 	private: int id;
 			string name;
 			int amount;
 			
 	public: Account()
	 {
	 cout<<"-----default constructor------"<<endl;

	  id = 101; name = "Siya"; amount = 600;
 	}
 	
 	Account(int a, string name,int amt)
 	{
 		cout<<"----Parameterize constructor-----"<<endl;
 		this->id=a;
 		this->name=name;
 		this->amount=amt;
 		
	 }
	 
	void accept(int a, string name, int amt)
	{
		cout<<"Accepting the parameter value:"<<endl;
		this->id=a;
 		this->name = name;
 		this->amount=amt;
 		
		
	}
	
	void display()
	{
		cout<<"   Id="<<id<<"  Name="<<name<<" Amount=  "<<amount<<endl;
	 }
 };
 
 int main()
 {
 	Account obj;
 	obj.accept(101,"Riya",10000);
 	obj.display();
 	
 	
 }
