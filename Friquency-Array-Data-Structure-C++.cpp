#include<iostream>
using namespace std;
int main()
{
	int a[5],f=0,k,i;
	cout<<"Enter The Element Of Array ";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"\nThe Array Is : ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	cout<<"\nEnter The Element For Frequency ";
	cin>>k;
	for(i=0;i<5;i++)
	{
		if(a[i]==k)
		f=f+1;
	}
	cout<<"Frequency Of "<<k<<" Is : "<<f; 
return 0;
}
