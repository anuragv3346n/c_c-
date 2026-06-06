#include<stdio.h>
void main()
{

	char str[20];
	printf("Enter a String: ");
	gets(str);
	strlwr(str);
	printf("Lower String Is %s",str);
}
