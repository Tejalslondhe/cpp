/* 5. Write a function power, which calculates x raised to y . Write another function, which calculates n! Using
for loop. Use these functions to calculate the sum of first n terms of the Taylor series:
sin(x) = x - 3! 3 x + 5! 5 x + ……*/

#include<stdio.h>
#include<math.h>
void cal();
void main()
{
 cal();
}
void cal()
{
    int x,i;
    int fact = 1,n;
    float sum=0;

    printf("\nEnter the value of x in the series :  ");
    scanf("%d",&x);

    printf("\nEnter the number of terms in the series  :   ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        fact = fact*i;
        sum = sum + (pow(x,i)/fact) ;

    }
    sum= sum +1;

    printf("\nThe sum of the taylor series is :  %.2f\n\n",sum);
}
