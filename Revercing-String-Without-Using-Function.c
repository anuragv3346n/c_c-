#include<stdio.h>
void main()
{
	char str[20],str1[20];
	int i,j;
	printf("Enter a String ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	i--;
	j=0;
	while(i>=0)
	{
		str1[j]=str[i];
		i--;
		j++;
	}
	str1[j]='\0';
	printf("The Reverced String Is %s",str1);
}
