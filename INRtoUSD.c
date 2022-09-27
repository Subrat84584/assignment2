//Assume price of 1 USD is INR 76.23.write a program to the amount in INR and convert in to USD.
#include<stdio.h>
int main()
{
	float a=72.23,inr,n;
	printf("entre your INR number");
	scanf("%f",&inr);
    n=a*inr;
	printf("your USD value is:%f",n);
	return 0;	
}
