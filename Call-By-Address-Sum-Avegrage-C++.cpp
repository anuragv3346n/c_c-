#include<iostream>
using namespace std;
void swap(int a,int b,int c,int *sum,int *avg)
{
	*sum=a+b+c;
	*avg=*sum/3.0;
}
int main()
{
	int a,b,c,sum,avg;
	cout<<"Enter The Value Of A and B and C ";
	cin>>a>>b>>c;
	cout<<"Before Swap A =  "<<a<<" B =  "<<b<<" c = "<<c;
	swap(a,b,c,&sum,&avg);
	cout<<"\nAfter Swap A =  "<<a<<"  B = "<<b<<" C = "<<c;
	cout<<"\nSum = "<<sum<<" Average = "<<avg;
	return 0;
}
