#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 float roll[5]={-5.5,65.04,-66.401};
	char str[3][15]={"Anurag","Ayush Verma","Aman"};
	for(int i=0;i<3;i++)
	{
	
	cout<<setw(15);
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout<<str[i];
	cout.width(5);
	cout<<setprecision(2)<<fixed;
	
	cout.setf(ios::showpos);
	cout.setf(ios::internal,ios::adjustfield);
	
	cout<<roll[i]<<"\n";
}
 return 0;
}
