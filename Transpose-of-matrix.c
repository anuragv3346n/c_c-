#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,row,col;
	printf("Enter the Order of the matrix \n");
	scanf("%d%d",&row,&col);
	printf("Enter the Element of Matrix ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("The Transposed Matrix is  \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}	
	
}
