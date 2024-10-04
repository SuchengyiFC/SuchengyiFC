#include<stdio.h>
 main()
{
  int carno[3]={102,205,139};		/*车牌号数组*/
  int car[10]={102,205,139,102,139,102,102,205,139,205};	/*车牌号*/
  int score[10]={3,2,6,3,2,3,6,1,3,2};		/*车牌号对应的罚分*/
  int i,j,sum[3]={0};
  for(i=0;i<3;i++)
  {   
    for(j=0;j<10;j++)
       if(car[j]==carno[i])  
    	 sum[i]=sum[i]+score[j];  	/*统计车牌号carno[i]的罚分*/
	     printf("车牌号%d罚分统计为：%d分\n",carno[i],sum[i]); 
  	}
  	for(i=0;i<3;i++)
  	 if(sum[i]>=12)  
	  printf("罚分>=12分的车牌号为：%d，罚分共%d分\n",carno[i],sum[i]);
} 
