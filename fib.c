#include<stdio.h>
int main()
{
	int n1,i;
	printf("Enter no of terms");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
int fib(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
