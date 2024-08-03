/*Q3. Write a program to check string is a palindrome.*/

#include<stdio.h>
#include<ctype.h>
int main()
{
	char arr[20];
	int i,n,flag;
	
	printf("Enter the string:");
	scanf("%s",arr);
	
	
	n = strlen(arr);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[n-i-1])    //arr[first letter] == arr[last letter] then not palindrom....arr[2nd]==arr[2nd last]
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}
	}
		
		if(flag ==1)
		{
			printf("%s is  palindrome.",arr);
		}
		else
		{
			printf("%s is not palindrome.",arr);
		}
			
}
