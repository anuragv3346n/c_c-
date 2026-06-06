#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j,key;
	cout<<"Enter The Element Of The Array ";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"\n The Array Is ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	for(i=1;i<5;i++)
	{
	key=a[i];
	j=i-1;
			while(key<a[j]&&j>=0)
			{
				a[j+1]=a[j];
				j--;
				
			}
			a[j+1]=key;
			
		
	}
	cout<<"\nThe Sorted Element Array Is ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	return 0;
}
