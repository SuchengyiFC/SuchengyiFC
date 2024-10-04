#include <stdio.h>
main()
{
	int i,a[4],max,min,sum=0;
	float ave;
     for(i=0;i<=3;i++)
     scanf("%d",&a[i]);
     max=a[0];
     min=a[0];
     for(i=0;i<=3;i++)
       {sum=sum+a[i];
	   if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
       }
       ave=sum/10.0;
       printf("平均值是：%.2f,最大值是：%d，最小值是：%d",ave,max,min); 
} 