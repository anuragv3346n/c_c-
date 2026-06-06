#include<iostream >
using namespace std;
class student
{
	char name[20];
	int rollno;
	float marks;
	public :
		friend istream & operator >>(istream &,student &);
		friend ostream & operator<<(ostream &,student &);
};
istream & operator >>(istream &in,student &s)
{
	cout<<"Enter The Name of The Student ";
	in>>s.name;
	cout<<"Enter The Marks of The Student ";
	in>>s.marks;
	cout<<"Enter The Roll No of The Student ";
	in>>s.rollno;
	return in;
}
ostream & operator <<(ostream &out,student &s)
{
	out<<"Name =  "<<s.name;
	out<<"\nMarks =  "<<s.marks;
	out<<"\nRoll No =  "<<s.rollno;
	return out;
}
int main()
{
	student std;
	cout<<"Enter The Details Of The Student \n";
	cin>>std;
	cout<<"Details Of THe Student "	;
	cout<<std;
	return 0;
}
