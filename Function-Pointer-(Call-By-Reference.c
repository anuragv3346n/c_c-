#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b,temp;
	printf("Enter The 2 No : ");
	scanf("%d%d",&a,&b);
	printf("Before Swap a = %d , \n b = %d\n",a,b);
	swap(&a,&b);
	printf("After swap a = %d\n b = %d",a,b);
}
