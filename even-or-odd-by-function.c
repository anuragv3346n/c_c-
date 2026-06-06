#include<stdio.h>
int main()
{
	int n,i,even=0,odd=0,ar[10];
	printf("enter the array size ");
	scanf("%d",&n);
	printf("enter %d No Of array ",n);
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Even= %d , Odd= %d ",even,odd);
}
