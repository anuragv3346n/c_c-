#include<stdio.h>


	struct data
	{
		char name[20];
		int rollno;
	};
	void print(struct data std)
	{
		printf("The Details of the student ");
		printf("Name = %s\nRoll No = %d",std.name,std.rollno);
	}
	void main()
	{
		struct data std;
		printf("Enter the name of the student ");
		gets(std.name);
		printf("ENter the Roll No Of The student ");
		scanf("%d",&std.rollno);
		print(std);
			}

