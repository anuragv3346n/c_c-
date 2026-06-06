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
 	int position;
 	node *ptr,*ptr1;
 	ptr=(node *)malloc(sizeof(node));
 	ptr->next=NULL;
 	cout<<"Enter Data Into The New Node ";
 	cin>>ptr->d;
 	cout<<"Where You Want To Add The New Node  \n Enter 1 For Adding In The Starting Of The List \n Enter 2 For Adding At The Last Position Of List";
 	cin>>position;
 	ptr1=start;
	 if(position==1)
 	{
 	
 		if(ptr1==NULL)
 		start=ptr;
		 else
		 {
		 
		 ptr->next=start;
		 start=ptr;
		}
	 }
	 else if(position==2)
	 {
	 	if(ptr1==NULL)
	 	start=ptr;
	 else
	 {
	 
	 	while(ptr1->next!=NULL)	 	
	 		ptr1=ptr1->next;
		 ptr1->next=ptr;
	}
	 }
	 else
	 {
	 
	 cout<<"Incorrect Position ";
	 
}
 }
 void display()
{
	node *ptr;
	ptr=start;
	if(ptr==NULL)
	cout<<"Empty Link List\n";
	else
	{
	
	while(ptr!=NULL)
	{
		
		cout<<"\t"<< ptr->d;
		ptr=ptr->next;
	}
	cout<<"\n";
}
	
}
void count()
{
	int count=0;
	node *ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	cout<<"Total Number Of Nodes Is "<<count<<"\n";
}
void AnyPositionInsert()
{
	int pos,count=0;
	node *ptr,*ptr1=start;

		while(ptr1!=NULL)
	{
		count++;
		ptr1=ptr1->next;
	}
	cout<<"Total Number Of Nodes Is "<<count<<"\n";
	cout<<"Enter The Position In which You wamt To insert The Data ";
	cin>>pos;
	
	 if(pos<1||pos>count+1)
	cout<<"Insertion Not Possible ";

	else
	{
	ptr=(node*)malloc(sizeof (node));
 	ptr->next=NULL;
 	cout<<"Enter Data Into The New Node ";
 	cin>>ptr->d;
 	if(pos==1)
 	{
	
 	ptr->next=start;
 	start=ptr;
 	cout<<"Insertion Succesfull ";
 }
 else
 {
 ptr1=start;
	for(int i=1;i<pos-1;i++)
	ptr1=ptr1->next;
	ptr->next=ptr1->next;
	ptr1->next=ptr;
	cout<<"Any Position instertion Succesfull\n";
}
}
}
void dfnode()
{
	node *ptr=start;
	start=start->next;
	free(ptr);
	cout<<"Deletion Succesfull \n";
}
void dlnode()
{
	node *ptr=start,*ptr1;
	if(ptr==NULL)
	cout<<"Deletion Not Possible ";
	else if(ptr->next==NULL)
	{
		free(ptr);
		start=NULL;
		cout<<"Deletion Succesful..";
	}
else
{

	while(ptr->next->next!=NULL)
	ptr=ptr->next;
	ptr1=ptr->next;
	ptr->next=NULL;
	free(ptr1);
	cout<<"Last Node Delete Succesful ";
}
}
void AnyPositionDelete()
{
	node *ptr=start,*ptr1;
	int count=0,pos,i;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	cout<<"No Of Element In The List Avalable For Delete "<<count;
	cout<<"Enter The Position For Deleting The Node ";
	cin>>pos;
	if(pos<1||pos>count)
	cout<<"Deletion Not Possible ";
	else
	{
		if(pos==1)
		{
		
		
		start=start->next;
		free(ptr1);
		cout<<"Deletion Succesfull ";
	}
	else
	{
	ptr=start;
	for(i=1;i<pos-1;i++)
	ptr=ptr->next;
	ptr1=ptr->next;
	ptr->next=ptr->next->next;//ptr->next=ptr1->next;
	free(ptr1);
	cout<<"Deletion SUccesfull \n";
	}
	}
}
void Sum()
{
	int sum=0;
	node *ptr=start;
	while(ptr!=NULL)
	{
	sum=(sum+ptr->d);
	ptr=ptr->next;	
	}
	cout<<"Sum Of Data Is "<<sum<<"\n";
}
void AlternetelementPrint()
{
	node*ptr=start;
	int i,count=0;						//Simple Way To Solve This Question .We Can Use Direct Property
		while(ptr!=NULL)				// while(ptr!=NULL)
	{									//cout<<ptr->d;
		count++;						//ptr=ptr->next->next;
		ptr=ptr->next;
	}
	cout<<"\nTotal Number Of Nodes Is "<<count<<"\n";
	node *ptr1=start;
	for(i=1;i<count+1;i++)
	{
		if((i%2)!=0)
			cout<<ptr1->d<<"\t";
		ptr1=ptr1->next;	
		
	}
	cout<<"\nAlternate Element Printed Succesfully \n";
}
void search()
{
	int pos=1,flag=0,found;
	node*ptr=start;
	cout<<"Enter The Elemennt You Want To Search ";
	cin>>found;
	if(ptr==NULL)
	cout<<"Empty Linked List \n";
	else
	{
		
		while(ptr!=NULL)
		{
			if(ptr->d==found)
			{
			flag=1;
			break;
			}
			ptr=ptr->next;
			pos++;
		}
		if(flag==1)
		cout<<"Element was Found at "<<pos<<" Position\n";
		else
		cout<<"Element Not Found \n";
		}
	}
	void frequency()
	{
		node*ptr=start;
		int num,hmt=0;
		cout<<"Enter The Number You Want To Find The frequency of \n";
		cin>>num;
		if(ptr==NULL)
		cout<<"Empty Link List \n";
		else
		{
		
		while(ptr!=NULL)
		{
			if(ptr->d==num)
			hmt++;
			ptr=ptr->next;	
		}
		if(hmt==0)
		cout<<" "<<num<<" Has 0 Frequency \n";
		else
		cout<<" "<<num<<" Has "<<hmt<<" Friquency \n";
	}
	}
	void reverse()
	{
		node *pn,*cn;					//pn=present node , cn=current  node;
		if(start==NULL)
		cout<<"Empty Link List ";
		else 
		{
			pn=start;
			start=start->next;
			pn->next=NULL;
			cn=pn;
			pn=start;
		while(start!=NULL)
		{
			start=start->next;
			pn->next=cn;
			cn=pn;
			pn=start;
		}
			start=cn;
			display();
			cout<<" Reverse Element Succesfull \n";
		}
	}
	void max_min()
	{
		node*ptr=start;
		int max,min;
		min=start->d;
		max=start->d;
		if(start==NULL)
		cout<<"Empty Link List \n";
		else
		{
		while(ptr!=NULL)
		{
			if(ptr->d>max)
			max=ptr->d;
			else if(ptr->d<min)
			min=ptr->d;
			ptr=ptr->next;			
		}
		cout<<"Max Value = "<<max<<"\n Min Value = "<<min<<"\n";
		}
	}
	void midvalue()
	{
		node*ptr=start,*ptr1=start;
		int count=0,mid,pos;
		while(ptr!=NULL)
		{
		
		count++;
		ptr=ptr->next;
		}
		cout<<"\nNo Of Element = "<<count;
		mid=(count/2);
		cout<<"\nExpected Mid Value Position = "<<mid;
		if(count%2==0)
		{
			cout<<"\nLink List Is Even And Contain 2 Mid Value ";
			for(int i=1;i<
			mid;i++)
			ptr1=ptr1->next;
			cout<<"\nMid Value 1 = "<<ptr1->d<<"\nMid Value 2 = "<<ptr1->next->d<<"\n";
		}
		else
		{
			cout<<"\nLink List Is Odd ";
			for(int i=1;i<mid;i++)
			ptr1=ptr1->next;
			cout<<" Mid Value = "<<ptr1->next->d<<"\n";
		}
	}

int main()
{
	int choice;
	while(1)
	{
	cout<<"Enter Your Choice \nEnter 1 For Create New Node \nEnter 2 For Display Result\nEnter 3 For Count The No Of Nodes\nEnter 4 For Enter Element at Any Place\nENter 5 For Delete First Node \nEnter 6 For Delete Last Node\nEnter 7 For Delete Any Position Element\nEnter 8 For Sum Of All Data\nEnter 9 For Print Alternate Element\nEnter 10 For Search Element\nEnter 11 For Find Friquency Of a Number\nEnter 12 For Reverse The List\nEnter 13 For Find Maximum or Minimum Value\nEnter 14 For For Find Mid Value \nEnter 15 For Exit\n";
	cin>>choice;
	if(choice==1)
	create();
	else if(choice==2)
	display();
	else if(choice==3)
	count();
	else if(choice==4)
	AnyPositionInsert();
	else if(choice==5)
	dfnode();
	else if(choice==6)
	dlnode();
	else if(choice==7)
	AnyPositionDelete();
	else if(choice==8)
	Sum();
	else if(choice==9)
	AlternetelementPrint();
	else if(choice==10)
	search();
	else if(choice==11)
	frequency();
	else if(choice==12)
	reverse();
	else if(choice==13)
	max_min();
	else if(choice==14)
	midvalue();
	else if(choice==15)
	break;
	else 
	cout<<"Wrong Choice ";
	}
	return 0;
}
