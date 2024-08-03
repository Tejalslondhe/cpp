#include<iostream>
#include<vector>
int no;
vector<int> vInt={23,45,678};////creates a vector
cout<<"isEmpty:"<<vInt.empty()<<endl;//1 :true
for(int i=0;i<5;i++)
{	cout<<"Enter";
	cin>>no;
	vInt.push_back(no);
}

