#include<iostream>
using namespace std;
class employee{
	
	private:
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
		
		void accept(int id,string name,double salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		
		void display(){
			
			cout<<"ID= "<<id<<"  Name= "<<name<<" Salary= "<<salary<<endl;
		}
	
	
};

class manager:  public employee{
	
	public:
		double incentive;
		manager(){
			incentive= 20;
		}
		
		manager(int id,string name,double salary,double incentive):employee(id,name,salary)
		{
			this->incentive=incentive;
		}
		
			void accept(double incentive)
		{
			this->incentive=incentive;
		}
		
		void display(){
			
			cout<<"Incentive= "<<incentive<<endl;
		}
		
};

class salesperson:  public employee{
	
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
		
			void accept(int pa,int pf)
		{
			this->pa=pa;
			this->pf=pf;
		}
		
		void display(){
			
			cout<<"PA = "<<pa<<endl;
				cout<<"PF = "<<pf<<endl;
		}
		
};

class salesmanager: public manager,public salesperson{
	
	public:
		double bonus;
		salesmanager(){
			bonus= 20;
		}
		
		salesmanager(int id,string name,double salary,double bonus):manager(id,name,salary,incentive),salesperson(id,name,salary,pa,pf)
		{
			this->bonus=bonus;
		}
		
			void accept(double bonus)
		{
			this->bonus=bonus;
		}
		
		void display(){
			
			cout<<"bonus= "<<bonus<<endl;
		}
		
};

int main()
{
	employee emp;
	emp.accept(101,"Ram",5000);
	emp.display();
	
	manager mng;
	mng.accept(1000); 
	mng.display();
	
	salesperson sp;
	sp.accept(1500,3000);
	sp.display();
	
	salesmanager sm;
	sm.accept(500);
	sm.display();
}
