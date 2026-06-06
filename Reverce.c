#include<stdio.h>
int main()
{
	int num,rev=0,d,num1;
	printf("Enter the Number Which You Want to Reverse ");
	scanf("%d,&num");
	num1=num;
	while(num!=0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	if(num1=rev)
	{
	
	printf("Paledrome");
}
	else
	{
	
	printf("No");
}
return 0;
}
