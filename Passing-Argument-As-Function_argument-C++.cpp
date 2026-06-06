#include<iostream>
using namespace std;
class sum
{
	int a,b;
	public :
		void getdata()
		{
			cout<<"Enter THe Value Of A and B ";
			cin>>a>>b;
		}
		void printdata()
		{
			cout<<"A =  "<<a<<"\nB =  "<<b;
		}
		void addition (sum s1,sum s2)
		{
			a=s1.a+s2.a;
			b=s1.b+s2.b;
		}
};
int main()
{
	sum s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.addition(s1,s2);
	s3.printdata();
	return 0;
	}
