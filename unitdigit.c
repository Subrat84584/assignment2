 //write a program to print the unit digit of a given number.
 #include<stdio.h>
 int main()
 {
 	int a,r;
 	printf("enter a two digit number");
 	scanf("%d",&a);
 	if(a>=10)
 	{
 		r=a%10;                     //% this operator given alwase reminder 
 		printf("unit digit is:%d",r);
	 }
	 return 0;

 }
