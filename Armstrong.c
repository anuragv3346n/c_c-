#include<stdio.h>
void main()
{
	int d,num,sum=0,num1;
	printf("Enter a number ");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
	d=num%10;
	sum=sum+d*d*d;
	num=num/10;
}
if(sum=num1)
printf("Armstrong No");
else
printf("It Is not ");
}
