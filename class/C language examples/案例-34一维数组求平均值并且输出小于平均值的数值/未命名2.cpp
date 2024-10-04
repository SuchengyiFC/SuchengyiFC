#include <stdio.h>
int main()
{
	float a[10],sum=0,ave=0;
	int i;
	for(i=0;i<=9;i++)
	   {scanf("%f",&a[i]);
	    sum=sum+a[i];
	   }
	   ave=sum/10;
	   printf("ave=%f\n",ave);
     for(i=0;i<=9;i++)
       {if(a[i]<ave)
       printf("a[%d]=%f\n",i,a[i]);
       }
 } 