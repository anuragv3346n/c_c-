#include<stdio.h>
int main()
{
	int i,j,temp,a[100],n;
	printf("enter the size of array ");
	scanf("%d",&n);
	printf("enter the %d element of array ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
	for(i=1;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
