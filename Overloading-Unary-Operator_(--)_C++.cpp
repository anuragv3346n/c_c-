#include<iostream>
using namespace std;
class unary
{
	int a,b;
	public :
		
		void getdata()
		{
			cout<<"Enter the Value Of THe A and B " ;
			cin>>a>>b;
		}
		void putdata()
	{
		cout<<"A = "<<a<<"\nB = "<<b;
	}
	void operator --();
		
};
void unary::operator --()
{
	a--;
	b--;
}
int main()
{
	unary i;
	i.getdata();
	--i;
	i.putdata();
	return 0;
}
