#include<iostream>
using namespace std;
class Data2;
class Data1
{
	int a;
	public:
		void getab(Data2 &);
		void putab(Data2);
		
};
class Data2
{
	int b;
	public :
		friend class Data1;
};
void Data1::getab(Data2 & d2)
{
	cout<<"Enter The Value Of A  and B  ";
	cin>>a>>d2.b;
}
void Data1::putab(Data2 d2)
{
	cout<<"A =  "<<a<<"\n B =  "<<d2.b;
}
int main()
{
	Data1 d1;
	Data2 d2;
	d1.getab(d2);
	d1.putab(d2);
return 0;
}
