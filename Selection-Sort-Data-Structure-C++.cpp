#include<iostream>
using namespace std;
int main()
{
	int i,j,t,a[5];
	cout<<"Enter The Array Element ";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"\nThe Array Element IS \n";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)//Complicty Of Selection Short Is O(n*n)or n square
		{
			if(a[j]<a[i])
			{
			
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	cout<<"\nAfter The Sorting Element The Array Is  ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	return 0;
}
