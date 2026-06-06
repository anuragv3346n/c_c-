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
			cout<<"Count =  "<<count;
			
		}
		
};
int number::count;


int main()
{
	number a,b;
	a.getdata(100,700);
	b.getdata(90,90);
	a.putdata();
	b.putdata();
	return 0;
}
