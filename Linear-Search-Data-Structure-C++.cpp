#include<iostream>
using namespace std;
int main()
{
	int a[5],i,flag=0,key,pos;
	cout<<"Enter The Array Element ";
	for(i=0;i<5;i++)
	cin>>a[i];
	cout<<"Enter The Number You Want To Search ";
	cin>>key;
	for(i=0;i<5;i++)
	{
	if(a[i]==key)
	{
		flag=1;
		pos=i+1;
		break;
	}
	
}
if(flag==1)
cout<<"The "<<key<<" Number IS Present At "<<pos<<" Position";
else 
cout<<"Element Not Found In The Array ";
return 0;
}
