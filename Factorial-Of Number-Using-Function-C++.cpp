#include<iostream>
using namespace std;
int factorial(int n)
{
	int i,fact;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int i,fact=1,n;
	cout<<"Enter The Number ";
	cin>>n;
	fact=factorial(n);
	cout<<"Factorial Is : "<<fact;
	return 0;
}
