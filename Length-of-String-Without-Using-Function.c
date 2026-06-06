#include<stdio.h>
void main()
{
	char str[20];
	int i;
	printf("Enter a string ");
	gets(str);
	
	while(str[i]!='\0')
	{
		i++;
	}
	str[i]='\0';
	printf("The Length Of The String is %d",i);
	
	
	}
