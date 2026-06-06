#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d (A) Is Greater",a);
		else
		printf("%d (C) Is Greater",c);
	}
	else
	{
		if(b>c)
		printf("%d (B) Is Greater",b);
		else
		printf("%d (C) Is Greater",c);
	}
	return 0;
}
