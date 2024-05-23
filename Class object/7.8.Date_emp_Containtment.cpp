/*7. Create Date class with members day, month, year. Write no argument and parameterized constructor.
Create two object s and initialize them using no argument and parameterized constructor respectively.
Print date using display function.

8. Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterized constructor in Employee Class.Write accept () function to accept
information and display () to display emp information.*/

#include<iostream>
using namespace std;
class date{
	private:
	int day,month,year;
	
	public:
	
	date()
	{
		
		day=1;month=1;year=2000;
		
	}
	
	
	date(int d,int m,int y)   //parameterize constrctor
	{
		this->day=d;
		this->month=m;
		this->year=y;
		
		
	}
	
	void accept_date(int d,int m,int y){
	this->day=d;
	this->month=m;
	this->year=y;
	}
	
	
	void show_date()
	{
		cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;
	}
};

class Employee{
	private:
	int	memb_id;
	string name;
	
	
	public:
		date dob;
		
	Employee()
	{
		cout<<"Default Constructor"<<endl;
		memb_id = 10;
		name = "Vijay";	
	}
	
	Employee(int memb_id,string name)
	{
		this->memb_id=memb_id;
		this->name=name;
		
	}
		
	void accept1(int mem_id,string name,int i,int j,int k){
		this->memb_id=memb_id;
		this->name=name;
		this->dob=date(i,j,k);
	}
	
	void show_emp_details()
	{
		
		cout<<"\n\n------Employee Details--------"<<endl;
		cout<<"memb_id=  "<<memb_id<<endl;
		cout<<"name=  "<<name<<endl;
		dob.show_date();
	
	}
	
		
		
	
};

int main(){

date obj;
obj.accept_date(1,2,2000);
obj.show_date();

Employee Emp;
Emp.show_emp_details();

Emp.accept1(516,"Ratan",28,12,2000);
Emp.show_emp_details();

}
