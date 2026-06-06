#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Value of n ";
	cin>>n;
	int *p=new int(5);
	cout<<"Enter The  "<<n<<" Nmber";
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"The Elements OF Array Is ";
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<"\n";
	}
	delete p;
	return 0;
}
