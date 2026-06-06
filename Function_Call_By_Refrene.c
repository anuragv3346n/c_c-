#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("plz enter 2 no ");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d , b=%d\n",a,b);
	swap(&a,&b);
	printf("After swap a=%d , b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
