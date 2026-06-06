#include<stdio.h>
void main()
{
	char str[20],str1[20];
	int i;
	printf("enter a String ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		str1[i]=str[i];
		i++;
	}
	str1[i]='\0';
	printf("The copied String Is %s",str1);
}
