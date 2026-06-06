#include<iostream>
using namespace std;
int main()
{
	int a[10],i,pos,j,mid,key,flag=0;
	cout<<"Enter The Element Of Array , \nMust Enter Element In Assending or Decending Order";//Must Enter Element In Assending or Decending Order
	for(i=0;i<10;i++)
	cin>>a[i];
	cout<<"Enter The Number You Want To Search ";
	cin>>key;
	i=0;j=9;
	while(i<=j)
	{
	mid=(i+j)/2;
	if(key==a[mid])
	{
		flag=1;
		pos=mid+1;
		break;
	}
	if(key<a[mid])
	j=mid-1;
	
	if(key>a[mid])
	
		i=mid+1;
	
}
if(flag==1)
cout<<"Element At "<<pos<<" Position ";
else
cout<<"Element Not Found ";
return 0;
}
