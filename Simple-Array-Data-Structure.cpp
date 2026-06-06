#include<iostream>
using namespace std;
int main()
{
	int a[5],i,max;
	cout<<"Enter The 5 Element ";
	for(i=0;i<5;i++)
	{
	
		cin>>a[i];
}
	
	max=a[0];
	for(i=0;i<5;i++)
	{
	
		if(a[i]>max)
		max=a[i];
		
}
cout<<"Max = "<<max;
	return 0;
}
