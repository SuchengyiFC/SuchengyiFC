#include<stdio.h>
 main()
{ int score[3][4];
  int i,j,sum[4]={0},max[4]={0},min[4]={100,100,100,100};
  char str[4][80]={"C语言程序设计","Java程序设计","高等数学","大学语文"};
  printf("请输入学生的成绩：\n"); 
  for(i=0;i<=2;i++)
    for(j=0;j<=3;j++)
       scanf("%d",&score[i][j]);//录入各科的成绩 
   for(j=0;j<=3;j++)
     {for(i=0;i<=2;i++)
       {sum[j]=sum[j]+score[i][j];//计算各科的总分 
       if(score[i][j]>max[j])
       max[j]=score[i][j];
       if(score[i][j]<min[j])
            min[j]=score[i][j];
       }
     } 
    printf("\n");
    printf("各科成绩统计结果如下：\n");
	for(j=0;j<=3;j++)
	   {printf("%s总分为:%d\n",str[j],sum[j]);
       printf("%s最高分为:%d\n",str[j],max[j]);
       printf("%s最低分为:%d\n",str[j],min[j]); 
        printf("\n");
	   }
} 