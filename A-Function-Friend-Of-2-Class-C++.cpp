#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public :
		void geta()
		{
			cout<<"Enter The Value Of A ";
			cin>>a; 
		}
		friend int large(A,B);
};
class B
{
	int b;
	public :
		void getb()
		{
			cout<<"Enter The Value Of B  ";
			cin>>b;
		}
		friend int large(A,B);
};
int large(A A1,B B1)
{
	if(A1.a > B1.b)
	
	
	return A1.a;
	else 
	return B1.b;

}
int main()
{
	A A1;
	B B1;
	A1.geta();
	B1.getb();
	int larger=large(A1,B1);
	cout<<"Larger No Is  "<<larger;
	return 0;
}
