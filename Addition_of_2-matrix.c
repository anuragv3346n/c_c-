#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter The Elements of A and B ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(a[2][2]=b[2][2])
	{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		}
			
	}
	else
	{
	printf("The addition of A and B is not possible ");
}
return 0;
	
}
