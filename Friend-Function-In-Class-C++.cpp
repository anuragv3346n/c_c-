#include<iostream>
using namespace std ;
class small
{
	int a,b;
	public :
		void getdata()
		{
			cout<<"Enter The Value Of A and B ";
			cin>>a>>b;
		}
		friend int addition(small);
		
};
int addition(small s)
{
	return s.a+s.b;
}
int main()
{
	small s;
	s.getdata();
	cout<<"Sum Is = " <<addition(s);
	return 0;
}
