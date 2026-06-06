#include<stdio.h>
void main()
{
	int a;
	FILE *fp;
	printf("Enter a No ");
	scanf("%d",&a);
	fp=fopen("Write-Function3.txt","w");
	putw(a,fp);
	fclose(fp);
}
