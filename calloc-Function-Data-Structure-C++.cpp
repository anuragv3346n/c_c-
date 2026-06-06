#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,n,*ptr;
	cout<<"Enter The No Of Blockes";
	cin>>n;
	ptr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		cout<<"Enter The Elemnt	";
		cin>>*(ptr+i);
	}
	cout<<"The Element Is ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<*(ptr+i);
	}
	return 0;
}
