#include<stdio.h>

void main()
{
	int x,y,square,n;
	printf("Enter the value of x,y  ");
	scanf("%d%d",&x,&y);
	square=power(x,y);
	printf("The Square of %d is %d",x,square);
}
 int power(int x,int y)
 {
 	if(y==0)
 	return 1;
 	else
 	return x*power(x,y-1);
 }
