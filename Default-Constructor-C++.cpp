#include<iostream>
using namespace std;
class op
{
	int a,b;
	public :
		op()
		{
			cout<<"Construct Called  \n";
			a=0;
			b=0;
		}
		void putdata()
		{
			cout<<" A = "<<a<<"\n B =  "<<b;
		}
};
int main()
{
	op o;
	o.putdata();
	return 0;
}
