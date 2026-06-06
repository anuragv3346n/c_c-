#include<iostream>
using namespace std ;
int main()
{
	int a[5],i,j,f=0;
	cout<<"Enetr The Array Element ";
	for(i=0;i<5;i++)
	cin>>a[i];
	
	cout<<"\nArray Is : ";
	for(i=0;i<5;i++)
	cout<<" "<<a[i];
	
	for(i=0;i<5;i++)
	{
	if(	a[i]==0)
		f++;
	}
	if(f>0)
	cout<<"\n Friquency Of 0 = "<<f;
	
	for(i=0;i<5;i++)
	{
		if(a[i]!=0)
		{
			f=1;
		for(j=i+1;j<5;j++)
		{
			if(a[j]==a[i])
			{
			f=f+1;
			a[j]=0;
			}
		}	
		
	
	cout<<"\n Frequency Of "<<a[i]<<" Is : "<<f;}
	}
	return 0;
}
