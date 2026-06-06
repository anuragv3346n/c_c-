#include<stdio.h>
int main()
{
	int sp,cp,loss,profit,result;
	printf("Enter Selling Price and Cost price ");
	scanf("%d%d",&sp,&cp);
	if(sp-cp==0)
	printf("No Profit No Loss");
	else
	{
		if(sp>cp)
		{
		result=sp-cp;
		printf("Congralutions You Receve profit of %d Rupees",result);
	}
		else
		{
		result=cp-sp;
		printf("Opps You Receve Loss %d Rupees ",result);
	}
	}
	return 0;
}
