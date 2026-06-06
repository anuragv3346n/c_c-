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
class b: public a
{
	protected :
		int b;
		public :
			void getdata()
			{
			
				cout<<"\n Enter the Value Of B = ";
				cin>>b;
			}
			void result()
			{
					cout<<"\n  The Value Of A Is  = "<<a;
			}
};
class c:public b
{
	int s;
	public:
		void putdata()
		{
			cout<<"\n The Value Of B Is  = "<<b;
		}
};
int main()
{
c aa;
aa.input();
aa.getdata();
aa.result();

aa.putdata();
return 0;
}
