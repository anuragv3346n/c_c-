#include<iostream>
using namespace std;
int main()
{
	int ans=0,n,digit;
	cout<<"Enter The Number To Reverse ";
	cin>>n;
	while(n!=0)
	{
		digit=n%10;
		if((ans>(INT_MAX)/10)||(ans<((INT_MIN)/10)))
		
		{
		
		cout<<" 0 ";
	break;
	}
		ans=(ans*10)+digit;
		n=n/10;
	}
 
	
	return 0;
}
