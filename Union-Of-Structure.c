#include<stdio.h>
void main()
{
	struct student
	{
		int rollno;
		char name[20];
	};
	struct employee
	{
		int empid;
		char name[20];
	};
	union data
	{
		struct student std;
		struct employee emp;
	};
	union data data;

	printf("Enter The Name of the student ");
	gets(data.std.name);
	printf("Enter The Roll No Of the Student ");
	scanf("%d",&data.std.rollno);
	printf("Name = %s\nRoll No = %d\n",data.std.name,data.std.rollno);
	
	printf("Enter The Name of the Employee ");
	fflush(stdin);
	gets(data.emp.name);
	printf("Enter The Id No Of the Employee ");
	scanf("%d",&data.emp.empid);
	printf("Name = %s\nEmployee Id = %d",data.emp.name,data.emp.empid);
}
