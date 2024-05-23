#include<iostream>
using namespace std;
int i,n,g1;
void greater_than(int arr[]){
	for(i=0;i<n;i++){
		if(arr[i]>50){
			
			cout<<arr[i]<<endl;
		}
	}
	
}

int main()
{

	cout<<"enter size:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter element:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"greater than 50 are:"<<endl;	

greater_than(arr);

}
	
	
