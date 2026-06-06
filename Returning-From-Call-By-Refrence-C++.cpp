#include<iostream>
using namespace std;
int & large(int &,int &);
int main()
{
	int a,b,larger;
	cout<<"Enter The Value Of A and B ";
	cin>>a>>b;
	larger=large(a,b);
	cout<<"Largest No Is =  "<<larger;
};
int & large(int & a,int & b)
{ 
	if (a>b)
	return a;
	else 
	return b;
}
