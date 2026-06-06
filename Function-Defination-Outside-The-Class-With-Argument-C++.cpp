#include<iostream>
using namespace std;
class number
{
	int a,b;
	
	public :
		void getdata(int ,int );
		void putdata();
};
void number :: getdata(int x,int y)
{
	a=x;
	b=y;
}
void number :: putdata()
{
	cout<<"A = "<<a<<"  B = "<<b;
}
int main()
{
	number n;
	n.getdata(12,23);
	cout<<"The Valee of A and B Is :  \n";
	n.putdata();
	
}
