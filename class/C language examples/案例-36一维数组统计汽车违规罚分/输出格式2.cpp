#include<stdio.h>
 main()
{
  int carno[3]={102,205,139};		/*���ƺ�����*/
  int car[10]={102,205,139,102,139,102,102,205,139,205};	/*���ƺ�*/
  int score[10]={3,2,6,3,2,3,6,1,3,2};		/*���ƺŶ�Ӧ�ķ���*/
  int i,j,sum[3]={0};
  for(i=0;i<3;i++)
  {   
    for(j=0;j<10;j++)
       if(car[j]==carno[i])  
    	 sum[i]=sum[i]+score[j];  	/*ͳ�Ƴ��ƺ�carno[i]�ķ���*/
	     printf("���ƺ�%d����ͳ��Ϊ��%d��\n",carno[i],sum[i]); 
  	}
  	for(i=0;i<3;i++)
  	 if(sum[i]>=12)  
	  printf("����>=12�ֵĳ��ƺ�Ϊ��%d�����ֹ�%d��\n",carno[i],sum[i]);
} 
