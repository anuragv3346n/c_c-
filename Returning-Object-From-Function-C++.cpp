#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public :
		void getdata()
		{
			cout<<"Enter The Value Of H , M , S  ";
			cin>>h>>m>>s;
		}
		void putdata()
		{
			cout<<" H =  "<<h;
			cout<<" M =  "<<m;
			cout<<" S =  "<<s;
		}
	friend time sum(time,time);	
};
time sum(time t1,time t2)
{
	time t3;
	t3.s=t1.s+t2.s;
	if(t3.s>60)
	{
		t3.s=t3.s-60;
		t3.m=t3.m+1;
	}
	t3.m=t1.m+t2.m;
	if(t3.m>60)
	{
		t3.m=t3.m-60;
		t3.h=t3.h+1;
	}
	t3.h=t1.h+t2.h;
	if(t3.h>24)
	{
		t3.h-24;
	}
}
int main()
{
	time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3.putdata();
}
