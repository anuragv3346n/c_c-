#include<iostream>
using namespace std;
class a
{
	protected :
		int a;
		public:
		void read()
		{
			cout<<"\n Eater The Value Of A = ";
			cin>>a;
		}
};
class b:public a
{
	int b;
	public:
		void read()
		{
			cout<<"\n Enter The Value Of B = ";<<a::read();
			cin>>b;
		}
		void print()
		{
			cout<<"\n A = "<<a<<"\n B = "<<b;
		}
};
int main()
{
	b aa;
	aa.read();
	aa.a::read();//to solve the Over ride problem
	aa.print();
	return 0;
}
