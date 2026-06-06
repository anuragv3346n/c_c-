#include<stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int Rollno;
		float Marks[5];
	};
	struct student std;
	int i;
	printf("Enter The Details Of The Students: ");
	printf("\nEnter The Name Of The student: ");
	gets(std.name);
	printf("Enter The Roll No Of The student: ");
	scanf("%d",&std.Rollno);
	printf("\nEnter The Marks Of The student: ");
	for(i=0;i<5;i++)
	{
	scanf("%f",&std.Marks[i]);
}
printf("The Details Of The Students ");
printf("Name = %s\nRoll No = %d\n",std.name,std.Rollno);
printf("Marks = \n");
for(i=0;i<5;i++)
{
	printf("Sub %d = %f\n",i+1,std.Marks[i]);
}
}

