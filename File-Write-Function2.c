#include<stdio.h>
void main()
{
	char ch;
	FILE *fp;
	printf("Enter a Character ");
	scanf("%c",&ch);
	fp=fopen("Write-Function2.txt","w");
	fputc(ch,fp);
	fclose(fp);
}
