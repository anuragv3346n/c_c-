#include<stdio.h>
void main()
{
	struct student
	{
		char Name[20];
		int RollNO;
		float Marks;
	};
	struct student std;
	printf("Enter The Details Of The Student: \n");
	printf("\nEnter The Name Of The Student: ");
	gets(std.Name);
	printf("\nEnter The Roll No Of The Student: ");
	scanf("%d",&std.RollNO);
	printf("\nEnter The Marks Of The Student: ");
	scanf("%f",&std.Marks);
	printf("The Details Of The Students Is: \n");
	printf("Name = %s\nRoll NO = %d\nMarks = %f",std.Name,std.RollNO,std.Marks);
}
