#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b,c;
	cout<<"Enter the Value Of A and B  ";
	cin>>a>>b;
	c=sum(a,b);
	cout<<"Sum = "<<c;
	return 0;	
}
