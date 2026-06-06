#include<iostream>
using namespace std;
float SI(int p,int r=5,int t=4)
{
	return p*r*t/100.0;
}
int main()
{
	cout<<SI(50000,6,3);
	cout<<SI(30000,9);
	cout<<SI(90000);
}
