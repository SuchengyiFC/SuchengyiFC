#include <stdio.h>	
main()			
{	double cost,cost1;	//分别表示购买金额和应付金额
	printf("请输入购买商品的金额:");	
	scanf("%lf",&cost);			
	if(cost>=12000)
	   cost1=cost*0.75;
	else if(cost>=8000)
	   cost1=cost*0.8;
	else if(cost>=1000)
	   cost1=cost*0.9;
	else
	  cost1=cost;
	printf("顾客购买商品金额为：%.2lf元\n该商品应付金额为：%.2lf元\n",cost,cost1);
}
