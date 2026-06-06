#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter The Digit Which You Want To sum ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum = "<<sum;
	return 0;
}
