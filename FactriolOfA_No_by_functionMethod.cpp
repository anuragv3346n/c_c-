#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter a no ");
	scanf("%d",&n);
    fact=factorial(n);
	printf("%d",fact);
}
  int factorial(int n)
  {
  	if(n==1||n==0)
  	return 1;
  	else 
  	return n*factorial(n-1);
  }
