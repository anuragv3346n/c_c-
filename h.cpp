#include<iostream>
using namespace std;
class integer
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter a and b: "<<endl;
			cin>>a>>b;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
		void putdata()
		{
			cout<<" a = "<<a<<endl;
			cout<<" b = "<<b<<endl;
		}
};
int main()
{
	integer I;
	I.getdata();
	I();
	I.putdata();
	return 0;
}
