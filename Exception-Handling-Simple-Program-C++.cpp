#include<iostream>
using namespace std;
int main()
{
	int a,b ,c;
	cout<<"\n Enter The The Value of A and B = ";
	cin>>a>>b;
	 try
	{
		if (b!=0)
		{
			c=a/b;
			cout<<"\n C ="<<c;
		}
		else
		throw(b);
	}
	catch(int b)
	{
		cout<<"\n ENter No "<<b<<"  Is Not divisible";
	}
	return 0;
}
