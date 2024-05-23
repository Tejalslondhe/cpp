/*3. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data
members. Also add the display function. Create Default and Parameterized constructors. Create the
object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class date{
	private:
	int day,month,year;
	
	public:
	date()
	{
		cout<<"Default Constructor"<<endl;
		day=1;month=1;year=2000;
		
	}
	
	
	date(int d,int m,int y)
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
	
	void setDay(int day)
	{
		this->day=day;		
	}
	
	void setMonth(int month)
	{
		this->month=month;		
	}
	
	void setYear(int year)
	{
		this->year=year;		
	}
	
	int getDay()
	{
		return day;
	}
	
	int getMonth()
	{
		return month;
	}
	
	int getYear()
	{
		return year;
	}
	
	
	void show_date(){
	cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;
	}
};



int main(){

date obj;
obj.accept_date(1,2,2000);
obj.show_date();

obj.setDay(28);
obj.setMonth(3);
obj.setYear(2024);

cout<<"After using setter and getter"<<endl;
obj.getDay();
obj.getMonth();
obj.getYear();
obj.show_date();


}
