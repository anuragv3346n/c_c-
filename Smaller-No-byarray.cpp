#include<stdio.h>
int main()
{
	int arr[5],i,small=32576;
	printf("enter 5 no of arr   ");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	if(small>arr[i])
	{
	
		small=arr[i];
}
printf("smaller no is %d",small);
return 0;
}
