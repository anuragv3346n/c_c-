#include<iostream>
using namespace std;
class Data2;
class Data1
{
	int a;
	public :
		void geta()
		{
			cout<<"Enter The Value Of A  ";
			cin>>a;
		}
		void putdata(Data2);
};
class Data2
{
	int b;
	public :
		void getb()
		{
			cout<<"Enter The Value of B  ";
			cin>>b;
		}
		friend void Data1::putdata(Data2);
};
void Data1::putdata(Data2 d2)
{
	cout<<" A =  "<<a;
	cout<<"\n B =  "<<d2.b;
}
int main()
{
	Data1 d1;
	Data2 d2;
	d1.geta();
	d2.getb();
	d1.putdata(d2);
	return 0;
}


