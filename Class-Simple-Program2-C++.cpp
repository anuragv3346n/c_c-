#include<iostream>
using namespace std;
class Number
{
	int a,b;
	
	public:
		void getdata()
		{
			cout<<"Enter The Value OF A and B ";
			cin>>a>>b;
		}
		void putdata()
		{
			cout<<"\nThe Value Of A and B Is : ";
			cout<<" \nA =  "<<a<<"  B = "<<b;
		}
		void swap()
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
};
int main()
{
	Number n;
	n.getdata();
	cout<<"\nBefore Swap ";
	n.putdata();
	n.swap();
	cout<<"\nAfter Swap ";
	n.putdata();
	return 0;
}
