#include<iostream>
#include<typeinfo>
#include<fstream>
using namespace std;
class car{
protected:	int speed;
		string name;
		string color;
public:
	car()
	{
	}
	
	car(int speed,string name,string color)
	
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	
	
	
	virtual void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	
	
	
	void display(){
		
		cout<<"name= "<< name<<"   color= "<<color<<"  speed="<<speed<<endl;
	}
	
};

class SUV:public car{
	
	public:
		SUV(){
		}
		
		SUV(int speed,string name,string color):car(speed,name,color)
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	
	
	
	void lux()
	{
		cout<<"SUV is a luxurious\n\n"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

class sadan:public car{
	
	public:
		sadan(){
		}
		
		sadan(int speed,string name,string color):car(speed,name,color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
	this->name=name;
	this->color=color;
	}
	
	
	void safety()
	{
		cout<<"sadan provide safety\n\n"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

class sports_car:public car{
	
	public:
		sports_car(){
		}
		
		sports_car(int speed,string name,string color):car(speed,name,color)
	
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	void accept(int speed,string name,string color)
	
	{
		this->speed=speed;
		this->name=name;
		this->color=color;
	}
	

	
	void fast()
	{
		cout<<"sports_car is a faster\n\n"<<endl;
	}
	
	void display(){
		
		cout<<"name= "<< name<<"  color= "<<color<<"  speed="<<speed<<endl;
	}	
};

string filename;


void writecar(string filename, car&cobj)
{
	fstream wcar(filename,ios::out|ios::binary|ios::app);
	wcar.write((char*)&cobj,sizeof(car));
	cout<<"info added"<<endl;
	wcar.close();
	
}

void readcar(string filename)
{
	car obj;
	fstream rcar(filename,ios::in|ios::binary);
	while(rcar.read((char*)&obj,sizeof(car)));
	{
		obj.display();
	}
	rcar.close();
	
}

int main()
{
	int ch,i,index=0;
	string name,color;
	int speed;
	
	car* show_r[5];
	typedef SUV SUV;
	SUV *suv;
	typedef sadan sadan;
	sadan *sd;
	typedef sports_car sports_car;
	sports_car *sp;
	
	car obj,cobj;
	
	do{
		cout<<"\n\nEnter choice:"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1: 
				if(index<5)
				{
				
				cout<<"Enter name,color,speed:"<<endl;
				cin>>name>>color>>speed;
				
				suv = new SUV(speed,name,color);
				show_r[index]=suv;
				index++;
				cout<<"SUV added"<<endl;
				}
				else
				{
					cout<<"full"<<endl;
				}
				break;
			case 2:
				if(index<5)
				{
					cout<<"enter name, color,speed";
					cin>>name>>color>>speed;
					
					sd = new sadan(speed,name,color);
					show_r[index]=sd;
					index++;
					cout<<"sadan added";					
				}
				else
				{
					cout<<"full";
				}
				break;
				
			case 3:
				if(index<5)
				{
					cout<<"enter name, color,speed";
					cin>>name>>color>>speed;
					
					sp = new sports_car(speed,name,color);
					show_r[index]=sp;
					index++;
					cout<<"sports car added";					
				}
				else
				{
					cout<<"full";
				}
				break;
				
			case 4:
				cout<<"Enter filename:";
				cin>>filename;
				writecar(filename, cobj);
				break;
				
			case 5:
				cout<<"Enter filename:";
				cin>>filename;
				readcar(filename);
				obj.display();
				break;
				
				
			
			
			
			case 6:
				cout<<"show all";
				
				for(int i=0;i<index;i++)
				{
					show_r[i]->display();
					
					
				if(typeid(*show_r[i])==typeid(SUV))
				{
					SUV *scar =dynamic_cast<SUV*>(show_r[i]);
					scar->lux(); 
				}
				
				if(typeid(*show_r[i])==typeid(sadan))
				{
					sadan *sdncar = dynamic_cast<sadan*>(show_r[i]);
					sdncar->safety();
				}
				
				if(typeid(*show_r[i])==typeid(sports_car))
				{
					sports_car *spcar=dynamic_cast<sports_car*>(show_r[i]);
					spcar->fast();
				}
				break;
				
				}
				
		
		}
	}
	while(i!=8);
}
