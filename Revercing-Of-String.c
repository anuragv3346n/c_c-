#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter An Array ");
	gets(str);
	strrev(str);
	printf("The Reverced String Is %s",str);
}
