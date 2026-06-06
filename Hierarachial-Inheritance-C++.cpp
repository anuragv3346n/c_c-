#include<iostream>
using namespace std;
class a
{
	protected :
		int a;
	public:
		void get()
		{
			cout<<"\n ENter The Value Of A = ";
			cin>>a;
		}
};
class b:public a
{
	protected :
		int b;
		public :
			void input()
			{
				cout<<"\n ENter The Value Of B = ";
				cin>>b;
			}
			void print ()
			{
				cout<<"\n A = "<<a<<"\n B = "<<b;
			}
};
class c:public a
{
	protected :
		int c;
		public :
			void in()
			{
				cout<<"\n Enter The Value Of C = ";
				cin>>c;
			}
			void out()
			{
				cout<<"\n A = "<<a<<"\n C = "<<c;
			}
};
int main()
{
	b aa;
	aa.get();
	aa.input();
	aa.print();
	c bb;
	bb.get();
	bb.in();
	bb.out();
	return 0;
}
