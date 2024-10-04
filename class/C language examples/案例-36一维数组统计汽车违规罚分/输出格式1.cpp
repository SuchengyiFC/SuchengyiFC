#include<stdio.h>
 main()
{
  int carno[3]={219,362,639};		/*车牌号数组*/
  int car[10]={219,362,639,219,639,219,219,362,639,362};	/*车牌号*/
  int score[10]={3,2,6,3,2,3,6,1,3,2};		/*车牌号对应的罚分*/
  int i,j,sum[3]={0};
  for(i=0;i<3;i++)
  {   
    for(j=0;j<10;j++)
       if(car[j]==carno[i])  
	     sum[i]=sum[i]+score[j];  	/*统计车牌号carno[i]的罚分*/
	printf("车辆牌号%d,罚分累计%d\n",carno[i],sum[i]);
  }
} 
