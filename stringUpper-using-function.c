#include<stdio.h>
void main()
{

	char str[20];
	printf("Enter a String: ");
	gets(str);
	strupr(str);
	printf("Upper String Is %s",str);
}
