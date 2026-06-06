#include<iostream>
using namespace std;
int main()
{
	int a[5],i,t,n,l;
	cout<<"Enter The Element Of The Array ";
	for(i=0;i<5;i++)
	cin>>a[i];

	cout<<"The Array Is : ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	
	cout<<"\n\nEnter The Number Of Position To Shift Array Element ";
	cin>>n;
	for(l=1;l<=n;l++)
	{
	t=a[0];
	for(i=0;i<4;i++)
	a[i]=a[i+1];
	a[4]=t;
}
	cout<<"\nUpdated Array Is ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	return 0;
}
