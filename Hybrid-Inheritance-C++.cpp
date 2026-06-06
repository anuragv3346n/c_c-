#include<iostream>
using namespace std;
class a
{
	protected :
		int a;
		public:
			void get()
			{
				cout<<"\n Enter The Value Of A = ";
				cin>>a;
			}
};
class b: public a
{
	protected :
		int b;
		public:
			void input()
			{
				cout<<"\n Enter The Value Of B = ";
				cin>>b;
			}
			void output()
			{
				cout<<"\n A = "<<a<<"\n B = "<<b;
			}
};
class c
{
	protected :
		int c ;
		public:
			void getdata()
			{
				cout<<"\n Enter The Value Of C = ";
				cin>>c;
			}
			void show()
			{
				cout<<"\n C = "<<c;
			}
};
class d:public b,public c
{
	public:
	void result()
	{
		cout<<"\n sum Of A , B , C Is = "<<a+b+c;
	}
};
int main()
{
	d aa;
	aa.get();
	aa.input();
	aa.getdata();
	aa.output();
	aa.show();
	aa.result();
	return 0;
}
