#include<stdio.h>
 main()
{ int score[3][3];
  int i,j,sum[3]={0},max[3]={0},min[3]={100,100,100};
  for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
       scanf("%d",&score[i][j]);
   for(j=0;j<=2;j++)
     {for(i=0;i<=2;i++)
       {sum[j]=sum[j]+score[i][j];
       
       if(score[i][j]>max[j])
       max[j]=score[i][j];
       if(score[i][j]<min[j])
            min[j]=score[i][j];
       }
     
     
     /*for(j=0;j<=2;j++)
     {for(i=0;i<=2;i++)
       {if(score[i][j]>max[j])
       max[j]=score[i][j];
       if(score[i][j]<min[j])
            min[j]=score[i][j];
       }*/ 
       printf("�γ�%d�ܷ�Ϊ:%d\n",j+1,sum[j]);
       printf("�γ�%d���ֵΪ:%d\n",j+1,max[j]);
       printf("�γ�%d��СֵΪ:%d\n",j+1,min[j]);
     } 
       /*for(j=0;j<=2;j++)
        {for(i=0;i<=2;i++)
	     if(score[i][j]<min[j])
            min[j]=score[i][j];
         } 
     for(j=0;j<=2;j++)
        printf("�γ�%d���ֵΪ:%d\n",j+1,max[j]);
     for(j=0;j<=2;j++)
        printf("�γ�%d��СֵΪ:%d\n",j+1,min[j]);*/
} 