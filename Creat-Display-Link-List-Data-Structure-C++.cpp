#include<iostream>
#include<stdlib.h>
using namespace std;
struct slist 
{
	int d;
	struct slist *next;
}*start=NULL;
typedef struct slist node;
void create()
{
	node *ptr,*ptr1;
	ptr=(node*)malloc(sizeof (node));
	ptr->next=NULL;
	cout<<"ENter The Data You Want TO Store In The Link List ";
	cin>>ptr->d;
	if(start==NULL)
	start=ptr;
	else
	{
	ptr1=start;
	while(ptr1->next!=NULL)
	ptr1=ptr1->next;
	ptr1->next=ptr;
	}
}
void display()
{
	node *ptr;
	ptr=start;
	if(ptr==NULL)
	cout<<"Empty Link List";
	else
	while(ptr!=NULL)
	{
		
		cout<<" "<< ptr->d<<"\n";
		ptr=ptr->next;
	}
	
}


int main()
{
	int choice;
	while(1)
	{
		cout<<"Enter Your Choice \n Enter 1 For Create New Node\n Enter 2 For Display Result\n Enter 3 For Break The Loop\n ";
		cin>>choice;
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else if(choice ==3)
		break;
		else
		cout<<"Enter Choice Is Incorrect";
	}
	return 0;
	}
