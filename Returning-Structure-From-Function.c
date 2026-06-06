#include<stdio.h>
struct data 
{
	char name[20];
	int rollno;
};
struct data print()
{
	struct data std;
	printf("Enter Name Of The student ");
	gets(std.name);
	printf("ENter the roll no of the student ");
	scanf("%d",&std.rollno);
	return std;
}
void main()
{
	struct data std;
	std=print();
	printf("The details of the student ");
	printf("\nName=%s\nRoll No = %d",std.name,std.rollno);
	
}
