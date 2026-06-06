#include<iostream>
using namespace std;
class overloading
{
	int a,b;
	public :
		overloading()
		{
			a=0;
			b=0;
		}
		overloading(int x)
		{
			a=x;
			b=x;
		}
		overloading(int x,int y)
		{
			a=x;
			b=y;
		}
		void putdata()
		{
			cout<<"A =  "<<a;
			cout<<"   B =  "<<b<<"\n";
		}
		
};
int main()
{
	overloading O1;
	overloading O2(5);
	overloading O3(56,56);
	O1.putdata();
	O2.putdata();
	O3.putdata();
	return 0;
}
