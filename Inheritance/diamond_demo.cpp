#include<iostream>
using namespace std;
class employee{
	
	public:
	int id;
	string name;
	double salary;
	
	public:
		employee(){
			id=0;
			name="xyz";
			salary=10;
		}
		
		employee(int id,string name,double salary){
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		
		
		
		void display(){
			
			cout<<"ID= "<<id<<"  Name= "<<name<<" Salary= "<<salary<<endl;
		}
	
	
};

class manager:   public employee
{
	
	public:
		double incentive;
		
		manager()
		{
			incentive= 20;
		}
		
		manager(int id,string name,double salary,double incentive):employee(id,name,salary)
		{
			this->incentive=incentive;
		}
		
			
		
		void display()
		{
			employee::display();
			cout<<"Incentive= "<<incentive<<endl;
		}
		
};

class salesperson:   public employee{
	
	public:
		int pa,pf;
		salesperson(){
			pa=pf= 10;
		}
		
		salesperson(int id,string name,double salary,int pa,int pf):employee(id,name,salary)
		{
			this->pa=pa;
			this->pf=pf;
		}
		
		
		
		void display()
		{
			
			employee::display();
			
			cout<<"PA = "<<pa<<endl;
			cout<<"PF = "<<pf<<endl;
		}
		
};

class salesmanager: public manager,public salesperson{
	
	public:
		double bonus;
		salesmanager()
		{
			bonus= 20;
		}
		
		salesmanager(int id,string name,double salary,double incentive,int pa,int pf,double bonus):manager(id,name,salary,incentive),
		salesperson(id,name,salary,pa,pf)
		//employee(id,name,salary)
		{
			this->bonus=bonus;
		}
		
		
		void display()
		{
			manager::display();
			salesperson::display();
			cout<<"bonus= "<<bonus<<endl;
		}
		
};

int main()
{
	salesmanager sm(101,"Ram",60000,5000,1000,2000,1500);
	sm.display();
	
	
}
