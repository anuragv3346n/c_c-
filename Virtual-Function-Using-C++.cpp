#include<iostream>
using namespace std;
class a
{
	public:
		int a=3;
		
		virtual	void soft()
			{
				cout<<"\n A = "<<a;
			}
};
class b:public a
{
public:
		int b=4;
		
			void soft()
			{
				cout<<"\n B = "<<b;
			}
};
int main()
{
a	*bptr;
b aa;
bptr=&aa;
bptr->soft();
return 0;
}
