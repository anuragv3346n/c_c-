#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 no.s");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
	return 0;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
