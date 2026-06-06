#include<stdio.h>
#define lol=10;
void main()
{
int a[lol],i,p,n,z;
printf("Enter 5 Numbers ");
for(i=0;i<lol;i++)
{
	scanf("%d",&a[i]);
}	
for(i=0;i<lol;i++)
{

	if(a[i]>0)
	p++;
	else if(a[i]<0)
	n++;
	else
	z++;
}
printf("Positive = %d\nNegative = %d\nZeros = %d",p,n,z);
	
}
