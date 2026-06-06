#include<iostream>
using namespace std;
class number
{
	int a,b;
	public :
		void getdata();
		void printdata();
	};
		void number :: getdata()
		{
			cout<<"Enter The Value Of A and B\n";
			cin>>a>>b;
		}
		void number  :: printdata()
		{
			cout<<"\nThe Value Of A and B Is \n";
			cout<<"A =  "<<a<<" B =  "<<b;
	}

int main()
{
	number n;
	n.getdata();
	cout<<"A and B are : ";
	
	n.printdata();
	return 0;
}






