//write the program to print the given number without its last number.
#include<stdio.h>
int main()
{
	int a,r;
	printf("enter the a number");
	scanf("%d",&a);
	if(a>=10)
	{
		r=a/10;                         // / this operator given alwase Quotient
		printf("digit is:%d",r);
	}
	return 0;
}
