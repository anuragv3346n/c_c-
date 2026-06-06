#include<stdio.h>
void main()
{
	int i,sum=0,a[10];
	printf("Enter the Element Of Array ");
	for(i=1;i<=10;i++)
	{
	
	scanf("%d",&a[i]);
}
	for(i=1;i<=10;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum = %d",sum);
}
