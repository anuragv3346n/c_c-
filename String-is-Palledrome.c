#include<stdio.h>
void main()
{
	char str[20],str1[20];
	printf("Enter The First string ");
	gets(str);
	printf("Enter the Second String ");
	gets(str1);
	strcpy(str1,str);
	strrev(str1);
	if(strcmp(str,str1)==0)
	printf("Paledrome No");
	else
	printf("Not Paledrome ");
}
