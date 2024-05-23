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
	
	void setd(int d)
	{
		this->day=d;
	}
	
	void setm(int m)
	{
		this->month=m;
	}
	
	void sety(int y)
	{
		this->year=y;
	}
	
	int getd()
	{
		return day;
	}
	
	int getm()
	{
		return month;
	}
	
	int gety()
	{
		return year;
	}
	
	
	void show_date()
	{
		cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;
	}
};

int main()
{
	date d;
	d.accept_date(3,5,1956);
	d.show_date();
	
	cout<<"Using setter and getter"<<endl;
	d.setd(6);
	d.setm(12);
	d.sety(2015);
	d.getd();
	d.gety();
	d.getm();
	d.show_date();
	}

