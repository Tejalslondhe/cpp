/* Q1. Write a C Program to find the Maximum and minimum of two numbers without 
using any loop or condition.*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	
	c = (abs(a-b)+(a+b))/2;
	
	
	printf("Maximun number is:%d\n",c);
	
	d = (abs(a+b)+(a-b))/2;
	
	
	
	printf("Minimum number is:%d",d);
	
	
	
	
	
	
}
