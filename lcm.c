#include<stdio.h>
int main()
{
	int x,y,max;
	printf("plz enter a no  ");
	scanf("%d%d",&x,&y);
	max=(x>y)? x:y;
	for( ; ; )
	{
		if((max%x==0)&&(max%y==0))
		{
		  printf("The Lcm of %d and %d is %d",x,y,max);	
		  break;
		}
		max++;
	
	}
	return 0;
	
}
