#include<iostream>
using namespace std;
int volume(int side)
{
	return (side*side*side);
}
int volume(int l,int b,int h)
{
	return(l*b*h);
}
float volume(float side)
{
return	(4/3.0*22/7.0*side*side*side);
}
int main()
{
	cout<<"Volume Of Cube = "<<volume(5);
	cout<<"\nVolume Of Cuboid = "<<volume(5,2,3);
	cout<<"\nVolume Of Sphere = "<<volume(9);
}
