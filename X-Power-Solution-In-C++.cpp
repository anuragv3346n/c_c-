#include<iostream>
using namespace std;
int main()
{
	int x,y,i,power;
	cout<<"Enter The Value Of  X and Y ";
	cin>>x>>y;
	for(i=1;i<=y;i++)
	{
	power=power*x;	
	}
	cout<<"Solution Is : "<<power;
	return 0;
}
