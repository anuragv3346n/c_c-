#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	int marks;
	public :
		void getdata()
		{
			cout<<"Enter The name Of The Student ";
			fflush(stdin);
			cin.getline(name,20);
			cout<<"Enter The Roll No Of THe Student ";
			cin>>rollno;
			cout<<"Enter THe Marks Of the student ";
			cin>>marks;
			
		}
		void printdata()
		{
			cout<<"\nName Of THe Student =  "<<name;
			cout<<"\nRoll NO OF the Student =  "<<rollno;
			cout<<"\nMarks Of THe student =  "<<marks;
		}

};
int main()
{
	int i;
	student s[4];
	cout<<"\nEnter The Details Of The Students ";
	for(i=0;i<4;i++)
	{
		cout<<"\nStudent "<<i+1<<"\n";
		s[i].getdata();
	}
	cout<<"\nDetail Of The Student Are ";
	for(i=0;i<4;i++)
	{
		cout<<"\nStudent  "<<i+1<<"\n";
		s[i].printdata();
	}
	return 0;
}
