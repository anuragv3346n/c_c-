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
		friend integer operator +(integer,integer);
};
integer operator +(integer i1,integer i2)
{
	integer i3;
	i3.a=i1.a+i2.a;
	i3.b=i1.b+i2.b;
	return i3;
}
int main()
{
	integer i1,i2,i3;
	i1.getdata();
	i2.getdata();
	i3=i1+i2;
	i3.putdata();
	return 0;
}
