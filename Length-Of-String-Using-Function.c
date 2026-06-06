#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int len;
	printf("Enter a String ");
	gets(str);
	len=strlen(str);
	printf("The Length Of The String Is %d",len);
}
