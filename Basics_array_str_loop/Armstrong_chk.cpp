//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{	 
//	string name;
//	char ch;
//	cout<<"Enter the name of the file";
//	cin>>name;
//	
//	ofstream fout;
//	fout.open(name.c_str());
//	if(fout.fail())
//	{
//		cout<<"Error";
//		}
//	else
//	{
//		for(ch=65;ch<=90;ch++)
//		{
//			fout<<ch<<endl;
//		}
//		}
//			
//}

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	
	char ch;
	string name;
	cout<<"Enter the file name"<<endl;
	cin>>name;

	
	ifstream input(name.c_str());
	if(!input.fail())
	{
		char data[50];
		int i;
		for(i=0;i<50;i++)
		{
		input>>data[i];
		cout<<data[i];
	}
	}
	else
	{
	}
	
}
