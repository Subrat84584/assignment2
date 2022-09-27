//Write the program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main()
{
	int a,n,num;
	printf("enter a number");
	scanf("%d",&a);
	n=a/10;
	num=n*10;
	printf("%d",num);
	return 0;
}
