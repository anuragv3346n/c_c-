#include<iostream>
using namespace std;
class op
{
	int a,b;
	public :
		op(int x,int y)
		{
			cout<<"Construct Called  \n";
			a=x;
			b=y;
		}
		void putdata()
		{
			cout<<" A = "<<a<<"\n B = "<<b;
		}
};
int main()
{
	op o(56,44);
	o.putdata();
	return 0;
}
