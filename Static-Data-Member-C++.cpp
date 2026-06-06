#include<iostream>
using namespace std;
class number 
{
	static int count ;
	int num;
	public :
		void getdata(int a,int b)
		{
			num=a+b;
			count++;
		}
		static void putdata()
		{
			cout<<"\nCount =  "<<count;
		}
		
};
int number :: count;
int main()
{
	number a,b;
	a.getdata(100,70);
	b.getdata(90,180);
	number::putdata();
	return 0;
}
