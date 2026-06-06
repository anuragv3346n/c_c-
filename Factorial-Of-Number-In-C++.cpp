#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,n;
	cout<<"Enter the Number : ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<"Factriol Of The Number  "<<n<<"  Is : "<<fact;
	return 0;
}
