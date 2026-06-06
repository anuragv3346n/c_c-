#include<stdio.h>
int main()
{
	int arr[5],i,large=0;
	printf("enter 5 no of arr");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	if(large<arr[i])
	{
	
		large=arr[i];
}
printf("Larger no is %d",large);
return 0;
}
