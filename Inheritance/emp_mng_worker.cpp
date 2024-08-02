#include<iostream>
using namespace std;
class employee{
	
	private:
		int id;
		string name;
		int depId;
	
	protected: double salary;
	
	public:
		employee()
		{
			id=1;
			name=" Siya";
			depId = 0;
			salary= 60000;
		}
		
		employee(int id,string name,int depId,double salary)
		{
			this->id=id;
			this->name=name;
			this->depId=depId;
			this->salary=salary;			
		}
		
		void accept(int id,string name,int depId,double salary)
		{
			this->id=id;
			this->name=name;
			this->depId=depId;
			this->salary=salary;	
		}
		
		
		void display()
		{
			cout<<"ID="<<id<<"  Name="<<name<<" Department ID="<<depId<<"  salary="<<salary<<endl;
		}
		
		virtual void calSalary()
		{
			cout<<"Employee Salary= "<<salary<<endl;
		}
	
	
};

class manager:public employee
{
	private: double bonus;
		
		
	public:
		manager()
		{
			this->bonus=5000;
			
		}
		
		manager(int id,string name,int deptId,double salary,double bonus)
		:employee(id,name,deptId,salary)
		
		{
			this->bonus=bonus;
		}
		
		
		void accept(double bonus)
		{
			this->bonus=bonus;	
		}
		
		
		void manager_task()
		{
			cout<<"\n\n---Manager task---"<<endl;
		}
		
		void calSalary()
		{
			cout<<"Manager Salary= "<<salary+bonus<<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"  Bonus="<<bonus<<endl;
		}
		
		
};

class worker:public employee
{
	private: int hr_worked;
		int hr_rate;
		
		
	public:
		worker()
		{
			this->hr_worked=0;
			this->hr_rate = 0;
			
		}
		
		worker(int id,string name,int deptId,double salary,int hr_worked, int hr_rate)
		:employee(id,name,deptId,salary)
		
		{
			this->hr_worked=hr_worked;
			this->hr_rate = hr_rate;
		}
		
		
		void accept(int hr_worked, int hr_rate)
		{
			this->hr_worked=hr_worked;
			this->hr_rate = hr_rate;
		}
		
		
		void workers_task()
		{
			cout<<"\n\n---workers task---"<<endl;
		}
		
		void calSalary()
		{
			cout<<"Workers Salary= "<<salary+(hr_worked*hr_rate)<<endl;
		}
		
		void display()
		{
			employee::display();
			cout<<"  Working hours="<<hr_worked<<" Pay per hours="<<hr_rate<<endl;
		}
		
		
};

int main()
{
	employee emp;
	manager mngr;
	worker w;
	
	
	int ch;
	
	do{
		cout<<"\n\nEnter choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Hire Manager"<<endl;
				//manager mngr;
				mngr.accept(10000);
				mngr.manager_task();
				mngr.display();
				mngr.calSalary();
				break;
				
			case 2:
				cout<<"Hire workers"<<endl;
				//worker w;
				w.accept(8,100);
				w.workers_task();
				w.display();
				w.calSalary(); 
				break;
				
			case 3:	
			
				cout<<"\n\nUsing array"<<endl;
				int i;
				employee* pay[3];
				pay[0]=&mngr;
				pay[1]=&w;
				
				
				for(i=0;i<3;i++)
				{
					pay[i]->display();
					pay[i]->calSalary();
				}
				
		}

}
		while(ch!=4);
		return 0;
}
