#include<stdio.h>
void main()
{
	int i,*ptr,a[3];
	ptr=a;
	printf("Enter The Elements ");
	for(i=0;i<3;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("The Elements Of Array ");
	for(i=0;i<3;i++)
	{
		printf("%d",*ptr);
	}
	
}
