/* sorting of an array */

#include<iostream>
using namespace std;
int main()
{
	int i,j,n,arr[50],temp;
	
	cout<<"Enter size"<<endl;
	cin>>n;
	
	cout<<"Enter the elements of an array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];		
	}
	
	cout<<"The array is: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;		
	}
	
	
	for(i=0;i<n;++i){
		for(j=i+1;j<n;++j){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"The array in descending order is\n:";
	for (i = 0; i < n; ++i)
    {
    cout<<arr[i];
    }
		
}
