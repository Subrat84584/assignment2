// Write the program of swap two given numbers.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the given number");
	scanf("%d %d",&x,&y);
	printf("Before swaping:x=%d y=%d\n",x,y);
	int z=x;
	x=y;
	y=z;
	printf("after swaping:x=%d y=%d",x,y);
	return 0;
} 
