#include<iostream>
using namespace std;
void process( int a[])
	{
		int i,j,t;
	
	for(j=0;j<5;j++)
	{
	
	for(i=0;i<4-j;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		
}
	}
	
	}
int main()
{
	int a[5],i;
	cout<<"Enter The Element Of Array ";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"Array Element Are ";
	
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	process(a);
	cout<<"\nThe Sorted Array Is ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	
	return 0;
}
