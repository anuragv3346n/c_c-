#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *ptr,i,n;
	cout<<"Enter The Number Of  Element ";
	cin>>n;
	ptr=(int *)malloc(n *sizeof (int));
	for(i=0;i<n;i++)
	{
		cout<<"Enter The Element ";
		cin>>*(ptr+i);
	}
	cout<<"The Element Is ";
	for(i=0;i<n;i++)
	{
		
		cout<<" "<<*(ptr+i);
	}
	return 0;
}
