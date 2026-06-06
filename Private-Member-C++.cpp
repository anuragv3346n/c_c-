#include<iostream>
using namespace std;
class number
{
	int x,y;
	
	private :
		int large()
		{
			if(x>y)
			return x;
			else
			return y;
		}
		public :
			void getdata()
			{
				cout<<"Enter THe Value OF X and Y ";
				cin>>x>>y;
			}
			void printdata()
			{
				cout<<"Large Number =  "<<large();
				
			}
};
int main()
{
	number n;
	n.getdata();
	n.printdata();
	return 0;	
	}

