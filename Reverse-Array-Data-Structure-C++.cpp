#include<iostream>
using namespace std;
int main()
{
	int a[7],i,j,t;
	cout<<"Enter The Element Of Array ";
	for(i=0;i<7;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe Array Is : ";
	for(i=0;i<7;i++)
	{
		cout<<" "<<a[i];
	}
	for(i=6;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<"\nThe Updated Array Is ";
	for(i=0;i<7;i++)
	
	cout<<" "<<a[i];
	return 0;
}
