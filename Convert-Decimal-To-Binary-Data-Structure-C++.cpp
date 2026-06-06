#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,digit=0,ans=0,i=0;
	cout<<"Enter The Value Of n ";
	cin>>n;
	while(n!=0)
	{
		
	int	bit=n & 1;
	ans=(bit*pow(10,i))	+ans;
	n=n>>1;
	i++;
	}
	cout<<"Answer = "<<ans;
}
