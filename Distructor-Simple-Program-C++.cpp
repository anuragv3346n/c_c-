#include<iostream>
using namespace std;
int count =0;
class input
{
	public:
		input()
		{
			count++;
			cout<<"\nConstructor Called "<<count;
		}
		~input()
		{
			count--;
			cout<<"\nDistructor Called "<<count;
		}
		
};
int main()
{
	input I;

};
