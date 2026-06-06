#include<stdio.h>
void main()
{
	int i,n;
	FILE *fp;
	fp=fopen("Divisibe-By-5and7.txt","w");
	for(i=1;i<1000;i++)
	{
		fscanf(fp,"%d",&n);
		if(n%5==0 && n%7==0)
		{
			fprintf(fp,"%d\t",n);
		}
		i++;
	}
	fclose(fp);
}
