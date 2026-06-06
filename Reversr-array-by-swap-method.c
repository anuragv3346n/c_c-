#include<stdio.h>
int main()
{
	int ar[10],i,j,n,temp;
	printf("enter the size of an array  ");
	scanf("%d",&n);
	printf("Enetr %d Element of array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
	temp=ar[i];
	ar[i]=ar[j];
	ar[j]=temp;	
	}
	printf("Reverse Array is = \n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",ar[i]);
}
}
