#include<iostream>
using namespace std;
int i,n,g1;
void is_even(int arr[])
{	int even;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			
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
	
		
cout<<"even elements are:"<<endl;
 is_even(arr);


}
	
	
