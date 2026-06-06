#include<iostream>
using namespace std;
int solution(int x,int y)
{
	int i,pow=1;
	for(i=1;i<=y;i++)
	{
		pow=pow*x;
	}
	return pow;
}
int main()
{
	int x,y,pow;
	cout<<"Enter The Value Of X and Y : ";
	cin>>x>>y;
	pow=solution(x,y);
	cout<<"The Solution Is : "<<pow;
	return 0;
}
