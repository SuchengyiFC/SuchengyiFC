#include<stdio.h>
 main()
{
  int carno[3]={219,362,639};		/*���ƺ�����*/
  int car[10]={219,362,639,219,639,219,219,362,639,362};	/*���ƺ�*/
  int score[10]={3,2,6,3,2,3,6,1,3,2};		/*���ƺŶ�Ӧ�ķ���*/
  int i,j,sum[3]={0};
  for(i=0;i<3;i++)
  {   
    for(j=0;j<10;j++)
       if(car[j]==carno[i])  
	     sum[i]=sum[i]+score[j];  	/*ͳ�Ƴ��ƺ�carno[i]�ķ���*/
	printf("�����ƺ�%d,�����ۼ�%d\n",carno[i],sum[i]);
  }
} 
