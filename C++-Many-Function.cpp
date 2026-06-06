#include<iostream>
using namespace std;


 void read(int & x)
{
	cout<<"Enter The Value Of x ";
	cin>>x;
}
 void print(int x)
{
	cout<<"The Value Of X is = "<<x;
}
int main()
{
	int x;
	read(x);
	print(x);
}
