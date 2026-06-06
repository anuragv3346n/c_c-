#include<stdio.h>
void main()
{
	struct date
	{
		int d;
		int m;
		int y;
	};
	struct student 
	{
		char name[30];
		int rollno;
		struct date dob;
	};
	struct  student std;
	printf("Enter the Name of the Student ");
	gets(std.name);
	printf("Enter the Roll No Of the student ");
	scanf("%d",&std.rollno);
	printf("Enter the Dob Of the student ");
	scanf("%d%d%d",&std.dob.d,&std.dob.m,&std.dob.y);
	printf("Name = %s\nRoll No = %d\nDob =%d/%d/%d",std.name,std.rollno,std.dob.d,std.dob.m,std.dob.y);
}






