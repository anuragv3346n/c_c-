#include<stdio.h>
void main()
{
	char str[20],str1[20];
	int i,c=0;
	printf("Enter The First String : ");
	gets(str);
	printf("Enter The Second String: ");
	gets(str1);
	i=0;
	while(str[i]!='\0'|| str1[i]!='\0')
	{
		if(str[i]==str1[i])	
		{
		i++;
		}
		else
		{
		c++;	
		break;
}}
if(c==0)
printf("Both Strings Are Equall ");
else
printf("Not Equall ");
	
	
	
}
