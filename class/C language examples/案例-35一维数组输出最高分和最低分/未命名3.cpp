#include <stdio.h>
int main()
{
	float a[10],t,sum=0,ave;
	int i;
	for(i=0;i<=9;i++)
	   {scanf("%f",&a[i]);
	     sum=sum+a[i];
	   }
	   ave=sum/10;
	   printf("ƽ����:ave=%.2f\n",ave);
    for(i=0;i<=8;i++)
       {if(a[0]<a[i+1])
           {t=a[0];
           a[0]=a[i+1];
           a[i+1]=t;
           }
       }
       printf("��߷���:a[0]=%.2f\n",a[0]);
	 for(i=0;i<=8;i++)
       {if(a[0]>a[i+1])
           {t=a[0];
           a[0]=a[i+1];
           a[i+1]=t;
           }
       }
       printf("��ͷ���:a[0]=%.2f\n",a[0]); 
 } 