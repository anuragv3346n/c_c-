#include<iostream>
using namespace std;
class student
{
	char Name[20];
	int RollNo;
	float Marks;
	
	public:
		void EnterData()
		{
			cout<<"Enter The Name Of THe Student : ";
			cin>>Name;
			cout<<"Enter The Roll No Of THe Student : ";
			cin>>RollNo;
			cout<<"Enter The Marks Of THe Student : ";
			cin>>Marks;
		}
		public:
			void PrintData()
			{
				cout<<" The Name Of The Student : "<<Name<<"\n";
				cout<<" The Roll No Of The Student : "<<RollNo<<"\n";
				cout<<" The Marks Of The Student : "<<Marks<<"\n";
			}
			
};
int main()
{
	student std;
	{
		cout<<"Enter The Details Of The Student "<<"\n";
		std.EnterData();
		cout<<"The Details Of The Student Is : "<<"\n";
		std.PrintData();
		return 0;
	}
}








