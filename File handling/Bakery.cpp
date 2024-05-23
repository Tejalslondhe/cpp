#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Bakery{
	
	private: int prod_id;
		char prod_name[20];
		char sub_prod_name[20];
		double price;
		
	public:
		void accept(int prod_id,char* prod_name,char* sub_prod_name,double price)
		{
			this->prod_id=prod_id;
			strcpy(this->prod_name,prod_name);
			strcpy(this->sub_prod_name,sub_prod_name);
			this->price=price;
		}
		
		void display()
		{
			cout<<"Product_ID:"<<prod_id<<"   "<<"Product_Name:"<<prod_name<<"  "<<"Sub_Product_Name:"<<sub_prod_name<<"  "<<"Price:"<<price<<endl;
		}
};


void writeProd(string filename, Bakery&bakeobj)
{
	cout<<"---Information will store in the file---"<<filename<<endl;
	
	fstream writeBake(filename,ios::out|ios::binary);
	
	writeBake.write((char*)&bakeobj,sizeof(Bakery));
	
	cout<<"Data is written in the file."<<endl;
	writeBake.close();

}

void readProd(string filename)
{
	Bakery obj;
	fstream readBake(filename,ios::in|ios::binary|ios::app);
	while(readBake.read((char*)&obj,sizeof(Bakery)))
	{
	obj.display();
	}
	readBake.close();
}




int main()
{
	cout<<"1.Add product   2.Display product    3.Exit"<<endl;
	int ch,prod_id;
	string filename;
	double price;
	char prod_name[20];
	char sub_prod_name[20];
	
	Bakery b1,b2,obj;
	
	do{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			cout<<"Enter ProductID, Product Name, Sub Product Name, Price"<<endl;
			cin>>prod_id>>prod_name>>sub_prod_name>>price;
			
			obj.accept(prod_id,prod_name,sub_prod_name,price);
			break;
			
			case 2:
				obj.display();
				break;
			
			case 3:
			cout<<"Enter the file name:";
			cin>>filename;
			
			writeProd(filename,obj);
			
			case 4:
			cout<<"Enter the file name:";
			cin>>filename;
			cout<<"Get product from the file"<<endl;
			readProd(filename);
			break;
			
			case 5:
				break;
				
			
		}
	}
		while(ch!=10);
}

