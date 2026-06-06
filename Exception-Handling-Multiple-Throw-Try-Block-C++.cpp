#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter The Value Of X = ";
	cin>>x;
	try
	{
		if(x==0)
		{
			throw(x);
		}
		if( x==100)
		{
			throw('x');
		}
		if(x==1000)
		{
			throw(3.3F);
		}
	}
	catch(int x)
	{
		cout<<"\n X = "<<x;
	}
	catch(char x)
	{
		cout<<"\n It Is  A Character Value "<<x;
	}
	catch(float x)
	{
		cout<<"\n Float Value "<<x;
	}
	return 0;
}
