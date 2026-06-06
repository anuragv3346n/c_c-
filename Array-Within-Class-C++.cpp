#include<iostream>
using namespace std;
class student 
{
	char name[20];
	int rollno;
	float marks[5];
	float avg;
	 public :
	 	void getdata()
	 	{
	 		int i;
	 		cout<<"ENter The Name Of The Student   ";
	 		cin.getline(name,20);
	 		cout<<"Enter The Roll No Of THe student   ";
	 		cin>>rollno;
	 		cout<<"Enter The Marks Of THe student   ";
	 		for(i=0;i<5;i++)
	 		{
	 			cin>>marks[i];
			 }
		}
		void Average()
		{
			int i;
			avg=0;
			for(i=0;i<5;i++)
			{
			
			avg=avg+marks[i];
			}
			avg=avg/5.0;
		}
		void printdata()
		{
			cout<<"\nName Of The Student Is = "<< name;
			cout<<"\nRoll No Is = "<<rollno;
			cout<<"\nPercentage = "<<avg;
			
		}
		
};
int main()
{
	student s;
	s.getdata();
	s.Average();
	s.printdata();
	return 0;
	
}
