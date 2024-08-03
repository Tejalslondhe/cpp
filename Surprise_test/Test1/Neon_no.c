/*Q4. C Program To Check Neon Number.

[Given a number (num)  we need to check whether it is a Neon Number ( i.e. a number where the sum of digits of the square of the number is equal to the number )
and return “true” or “false” accordingly.]
*/

#include<stdio.h>
int main()
{
	int i,num,sum =0,squ,rem;
	
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	squ = num*num;  //81
	
	
	while(squ!=0)
	{
		rem = squ%10; //81%10 = 1     //8%10 = 8
		sum = sum+rem; // sum = 0+1 = 1     // 1+8 = 9
		squ = squ/10;  // squ = 81/10 = 8   // 8/10 = 0
	}
	
	if(sum == num)
	{
		printf("The given number %d is Neon.",num);
	}
	else
	{
		printf("The given number %d is not Neon.",num);	
	}
			
}
