#include<stdio.h>
int swap(int,int);
void main()
{
	int a,b;
	printf("plz enter 2 no  ");
	scanf("%d%d",&a,&b);
	printf("Before swap a=%d, b=%d\n",a,b);
	 swap(a,b);
	printf("After swap a=%d, b=%d",a,b);
}
 	swap(int a,int b)
 	{
 	int c;
	 c=a;
	 a=b;
	 b=c;
	 	
	 }
