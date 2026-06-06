#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,row1,col1,row2,col2;
	printf("Enter the Order of A Matrix");
	scanf("%d%d",&row1,&col1);
printf("Enter the Order of B Matrix");
	scanf("%d%d",&row2,&col2);
	if(col1==row2)
	{	
	printf("Enter the element of 1 st matrix");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements of 2nd matrix");
		for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			c[i][j]=0;
			for(k=0;k<col1;k++)
			{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];	
			}
		}
		printf("\n");
		
	}
	printf("The Resultant matrix is \n");
		for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

else 
{
printf("Multiplication is not possible");
}
}
