#include<stdio.h>
void main()
{
	union list 
	{
		int x;
		float y;
		char z;
	};
	union list one;
	one.x=100;
	printf("x=%d\nY=%f\nZ=%c\n",one.x,one.y,one.z);
	one.y=67.6;
	printf("x=%d\nY=%f\nZ=%c\n",one.x,one.y,one.z);
	one.z='F';
	printf("x=%d\nY=%f\nZ=%c",one.x,one.y,one.z);
}
