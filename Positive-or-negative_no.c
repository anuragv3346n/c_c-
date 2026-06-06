#include<stdio.h>
int main()
{
	int i,ar[2];
	printf("enter 2 No Of array ");
	for(i=0;i<2;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<2;i++)
	{
		if(ar[i]<0)
		printf("%d is a negative no ",ar[i]);
		else
		printf("%d is a positive no ",ar[i]);
	}
	
}
