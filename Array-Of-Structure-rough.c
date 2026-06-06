#include<stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int rollno;
		float marks;
	};
	struct student std[3];
	int i;
	printf("Enter The Detail Of the students \n");
	for(i=0;i<3;i++)
	{
		printf("Enter the name of the student \n");
		fflush(stdin);
		gets(std[i].name);
		printf("Enter the Roll No Of the student \n");
		scanf("%d",&std[i].rollno);
		printf("Enter the Marks Of the student\n");
		scanf("%f",&std[i].marks);
		
	}
	printf("The Details Of the student is \n");
	for(i=0;i<3;i++)
	{
		printf("Name=%s\nRoll No = %d\nMarks = %f\n",std[i].name,std[i].rollno,std[i].marks);
	}
}








