#include<stdio.h>
int main()
{
	int x,y,i,min,HCF;
	printf("plz enter a no  ");
	scanf("%d%d",&x,&y);
	min=(x<y)? x:y;
	for(i=1;i<=min;i++)
	{
		if((x%i==0)&&(y%i==0))
		{
		  HCF=i;	
		}
	}
	
	printf("The HCF of %d and %d is %d",x,y,HCF);
	return 0;
	
}
