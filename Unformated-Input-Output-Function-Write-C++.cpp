#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char name[22]="Anurag Verma";
	for(int i=1;i<=strlen(name);i++)
	{
		cout.write(name,i);
		cout.put('\n');
	}
	for(int i=strlen(name);i>=1;i--)
	{
		cout.write(name,i);
		cout.put('\n');
	}
	return 0;
}
