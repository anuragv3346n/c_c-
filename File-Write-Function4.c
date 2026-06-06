#include<stdio.h>
void main()
{
	int i;
	char str[30];
	FILE *fp;
	printf("Enter aString ");
	gets(str);
	fp=fopen("Write-Function4.txt","w");
	fputs(str,fp);
	fclose(fp);
}
