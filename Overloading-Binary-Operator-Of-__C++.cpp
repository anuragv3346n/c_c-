#include<iostream>
using namespace std;
class binary
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter The Value Of A and B  ";
			cin>>a>>b;
		}
		void putdata()
		{
			cout<<"A =  "<<a;
			cout<<" B = "<<b;
		}
	binary	operator-(binary I2)
	{
		binary I3;
		I3.a=a-I2.a;
		I3.b=b-I2.b;
		return I3;
	}
		
};
int main()
{
	binary I1,I2,I3;
	I1.getdata();
	I2.getdata();
	I3=I1-I2;
	I3.putdata();
	return 0;
}
