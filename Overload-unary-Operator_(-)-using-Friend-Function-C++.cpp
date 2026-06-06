#include<iostream>
using namespace std;
class integer
{
	int a,b;
	public :
		void getdata()
		{
			cout<<"Enter The Value Of A and B  ";
			cin>>a>>b;
		}
		void putdata()
		{
			cout<<" A =  "<<a<<"\n B =  "<<b;
		}
		friend void operator -(integer &);
};
void operator -(integer &3i1)
{
	i1.a=-i1.a;
	i1.b=-i1.b;
}
int main()
{
	integer i1;
	i1.getdata();
	-i1;
	i1.putdata();
	return 0;
}
