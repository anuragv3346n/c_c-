#include<iostream>
using namespace std;
class sum
{
	int a;
	public :
	void input()
	{
		cout<<"\n Enter The The Value Of A = ";
		cin>>a;
	}
		void output()
		{
			cout<<"\n A = "<<a;
			
		}	
		sum operator +(sum bb)
		{
			int cc;
			cc.a=a+bb.a;
			return cc;
		}
};
int main()
{
	sum aa,bb,cc;
	aa.input();
	bb.input();
	aa.output();
	bb.output();
	cc=aa+bb;
	return 0;
}
