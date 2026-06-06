#include<iostream>
using namespace std;
class paste
{
	int a,b;
	public :
		paste(int x,int y)
		{
			a=x;
			b=y;
		}
		paste(paste & P)
		{
			a=P.a;
			b=P.b;
		}
		void putdata()
		{
			cout<<" A  =  "<<a;
			cout<<"   B  =  "<<b<<"\n";
		}
};
int main()
{
	paste P(78,99);
	paste P1(P);
	paste P2=P1;//Also Work paste p2(p1);
	P.putdata();
	P1.putdata();
	P2.putdata();
	return 0;
}

