//Write a program to take three digit number from the user and rotate its digit by one position towards the right.
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	int rem=a%10;
	a=a/10;
	int rot=rem*100+a;
	printf("%d",rot);
	return 0;
}
