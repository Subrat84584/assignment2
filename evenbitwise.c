//Write the program to find the number is even or odd using bitwise operator.
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if((a&1)==0)
	  printf("This number is even");
	else
	   printf("This number is odd");
	   return 0;

}
