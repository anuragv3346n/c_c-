#include<stdio.h>
void main ()
{
	struct student 
	{
		char name[20];
		int  Rollno;
		float Marks;
	}std[3];
	printf("Enter The Details Of The Student: ");
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nEnter The Name Of The %d Student: ",i+1);
		fflush(stdin);
		gets(std[i].name);
		printf("Enter The Roll No Of The %d Student: ",i+1);
		scanf("%d",&std[i].Rollno);
		printf("Enter The Marks Of The %d Student: ",i+1);
		scanf("%f",&std[i].Marks);
	}
	printf("\nThe Details Of The Student Is ");
	for(i=0;i<3;i++)
	{
		printf("\nName  The %d Student Is: %s",i+1,std[i].name);
		printf("\nRoll No Of The %d Student Is: %d ",i+1,std[i].Rollno);
		printf("\nMarks Of The %d Student Is: %f\n",i+1,std[i].Marks);	
	}
}

