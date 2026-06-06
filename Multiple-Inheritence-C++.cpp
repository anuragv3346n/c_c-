#include<iostream>
using namespace std;
class a
{
	protected :
		int a;
		public :
			void input()
			{
				cout<<"\n Enter The Value Of A = ";
				cin>>a;
			}
};
class b
{
	protected :
		int b;
		public :
			void getdata()
			{
				cout<<"\n Enter The Value Of B = ";
				cin>>b;
			}
};
class c:public a,public b
{
	int s;
	public:
		void putdata()
		{
			cout<<"\n The Sum Is = "<<a+b;
		}
};
int main()
{
	c aa;
	aa.input();
	aa.getdata();
	aa.putdata();
	return 0;
}
