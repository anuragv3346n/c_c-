#include<iostream>
using namespace std;
class sum
{
	int h,m,s;
	public :
		void getdata()
		{
			cout<<"Enter THe Value Of H and M and S";
			cin>>h>>m>>s;
		}
		void printdata()
		{
			cout<<"HOUR MINUTE SECOND\n";
			cout<<" "<<h<<" -  "<<m<<"  -  "<<s;
		}
		void addition (sum s1,sum s2)
		{
		    h=s1.h+s2.h;
			if(h>24)
			h=h-24;
			m=s1.m+s2.m;
			if(m>60)
			{
			m=m-60;
			h=h+1;
			}
			s=s1.s+s2.s;
			if(s>60)
			{
			s=s-60;
			m=m+1;
		}
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
