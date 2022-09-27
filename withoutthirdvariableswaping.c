//swaping without using third variable.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the value of x and y");
	scanf("%d %d",&x,&y);
	printf("before swaping:x=%d y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swaping:x=%d y=%d",x,y);
	return 0;
}
