#include <stdio.h>	
main()			
{	double cost,cost1;	//�ֱ��ʾ�������Ӧ�����
	printf("�����빺����Ʒ�Ľ��:");	
	scanf("%lf",&cost);			
	if(cost>=12000)
	   cost1=cost*0.75;
	else if(cost>=8000)
	   cost1=cost*0.8;
	else if(cost>=1000)
	   cost1=cost*0.9;
	else
	  cost1=cost;
	printf("�˿͹�����Ʒ���Ϊ��%.2lfԪ\n����ƷӦ�����Ϊ��%.2lfԪ\n",cost,cost1);
}
