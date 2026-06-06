#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	 
}
int main()
{
	int a,b;
	cout<<"Enter The Value Of A and B";
	cin>>a>>b;
	cout<<"Before Swap A =  "<<a<<" B =  "<<b;
	swap(a,b);
	cout<<"\nAfter Swap A =  "<<a<<"  B = "<<b;
	return 0;
	
};

