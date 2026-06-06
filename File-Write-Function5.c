#include<stdio.h>
void main()
{
	int a=10;
	float b=98.2;
	char c='A';
	FILE *fp;
	fp=fopen("Write-Function5.txt","w");
	fprintf(fp,"%d\t%.2f\t%c",a,b,c);
	fclose(fp);
}
