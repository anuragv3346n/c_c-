#include<stdio.h>
void main()
{
	char str[20];
	int i,j,f=0;
	printf("Enter a string: ");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	i--;
	j=0;
	while(j<i)
	{
		if(str[j]!=str[i])
		{
			f++;
			break;
}
		i--;
		j++;
	}
	if(f==0)
	printf("The String Is Paledrome ");
	else
	printf("The String Is not Palledrome");
}
