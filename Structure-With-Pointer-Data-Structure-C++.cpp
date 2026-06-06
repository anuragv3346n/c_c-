#include<iostream>
using namespace std;
struct student
{
	int roll;
	char name[20];
	float per;
};
int main()
{
	struct student std,*ptr;
	ptr=&std;
	cout<<"Enter The Roll No Of The Student ";
	cin>>ptr->roll;
	cout<<"Enter The Name No Of The Student ";
	cin>>ptr->name;
	cout<<"Enter The Percentage No Of The Student ";
	cin>>ptr->per;
	cout<<"\nThe Details Of The Student ";
	cout<<"\nThe Roll No Of The Student ";
	cout<<ptr->roll;
	cout<<" \nThe Name No Of The Student ";
	cout<<ptr->name;
	cout<<" \nThe Percentage No Of The Student ";
	cout<<ptr->per;
	return 0;
}

