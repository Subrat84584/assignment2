//write a program input the given three digit number and print the sum of the digit.
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter a three digti number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
		printf("sum of three digit no:%d",sum);
	return 0;
}
 
