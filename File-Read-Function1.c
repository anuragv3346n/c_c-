#include<stdio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("Read-Function1.txt","r");
	if(fp==NULL)
	{
		printf("Error In File Opening ");
		exit (0);
	}
	while(!feof(fp))
	{
		ch=gets(fp);
		printf("%c",ch);
	}
	
}
