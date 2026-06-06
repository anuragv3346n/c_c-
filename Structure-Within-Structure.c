#include<stdio.h>
void main()
{
	struct date
	{
		int d,m,y;
	};
	struct student
	{
		char name[40];
		int rollno;
		struct date DOB;
	};
	struct student std;
	printf("Enter The Details Of The Students: ");
	printf("/n/nEnter The Name Of The Student: ");
	gets(std.name);
	printf("Enter the Roll No Of The Student ");
	scanf("%d",&std.rollno);
	printf("Enter the Date Of Birth Of the student ");
	scanf("%d%d%d",&std.DOB.d,&std.DOB.m,&std.DOB.y);
	printf("\nThe Detail Of Th student Are: ");
	printf("\nName = %s\nRoll No = %d\nDOB = %d/%d/%d",std.name ,std.rollno,std.DOB.d,std.DOB.m,std.DOB.y);
}
