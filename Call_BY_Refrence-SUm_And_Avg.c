#include<stdio.h>

void main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter 3 no  ");
	scanf("%d%d%d",&a,&b,&c);
	sanda(a,b,c,&sum,&avg);
	printf("sum=%d , avg=%f",sum,avg);
}
void sanda(int a,int b,int c,int *s,float *av)
{
	*s=a+b+c;
	*av=*s/3.0;	
}

