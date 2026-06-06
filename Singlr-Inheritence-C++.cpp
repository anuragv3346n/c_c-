#include<iostream>
using namespace std;
class a
{
	protected :
		int x;
		public:
			input()
			{
				cout<<"Enter The 1 ST Number ";
				cin>>x;
			}
			
};
class b:public a
{
	int y;
	public:
		getdata()
		{
			cout<<"Enter The 2 nd Number ";
			cin>>y;
		}
		putdata()
		{
			cout<<"Sum Is = "<<x+y;
		}
};
int main()

{
	b aa;
	aa.input();
	aa.getdata();
	aa.putdata();
	return 0;
}
 
