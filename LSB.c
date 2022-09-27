//Write the program to find the possition of first 1 in LSB.
#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter the number");
	scanf("%d",&a);
	while(!(a&1))
	{
		a>>=1;
		count++;
	}
	printf("position of first 1 is %d",count+1);
	return 0;
}
