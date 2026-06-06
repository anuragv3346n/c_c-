#include<stdio.h>
void main()
{
	char ch;
	FILE *fp;
	printf("Enter a Character ");
	scanf("%c",&ch);
	fp=fopen("Write-Function1.txt","w");
	putc(ch,fp);
	fclose(fp);
}
