#include<iostream>
using namespace std;
class student 
{
	public :
		
	int Rollno;
	char Name[20];
	public:
	void GetData()
	{
		
		cout<<"Enter The Name Of The Student ";
		cin>>Name;
		cout<<"Enter The Roll No Of The Of The Student ";
		cin>>Rollno;
	 } 
	 public:
	 void PrintData()
	 {
	 	
	 		cout<<"Name Of The The Student Is  "<<Name<<"\n";
	 		cout<<"Roll No of the Student is  "<<Rollno;
	 }
};
int main()
{
	student std;
	std.GetData();
	std.PrintData();
};
