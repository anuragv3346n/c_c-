#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],str1[20];
	printf("Enter a String ");
	gets(str);
	strcpy(str1,str);
	printf("The copied STring is %s",str1);
}
