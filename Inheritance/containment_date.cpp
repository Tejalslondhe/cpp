#include<iostream>
using namespace std;
class date{
	private:
	int day,month,year;
	
	public:date(){
		day=0;month=0;year=0;
		
	}
	
	
	date(int d,int m,int y){
		this->day=d;
		this->month=m;
		this->year=y;
		
		
	}
		void accept_date(int d,int m,int y){
			this->day=d;
		this->month=m;
		this->year=y;
			
		}
		void show_date(){
			cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;
		}
};

class student{
	private:
	int	rollno;
	int age;
	
	
	public:
		date dob;
		
	student()
	{
	rollno=age=10;	
	}
	
	student(int rollno,int age){
		this->rollno=rollno;
		this->age=age;
		
	}
		
	void accept1(int rollno,int age,int i,int j,int k){
		this->rollno=rollno;
		this->age=age;
		this->dob=date(i,j,k);
	}
	
	void show_std_details()
	{
		
		cout<<"------Students Details--------"<<endl;
		cout<<"rollno  "<<rollno<<endl;
		cout<<"age  "<<age<<endl;
		dob.show_date();
	
	}
	
		
		
	
};

int main(){

date obj;
obj.accept_date(1,2,2000);
obj.show_date();

student stud;
stud.accept1(215,23,28,12,2000);
stud.show_std_details();

}
