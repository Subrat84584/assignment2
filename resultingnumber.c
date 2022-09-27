//write a program to input a number form user and also a digit.Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
	int n,s=9;
	printf("enter the number");
	scanf("%d",&n);
	n=n*10+s;
	printf("%d",n);
	return 0;

}
