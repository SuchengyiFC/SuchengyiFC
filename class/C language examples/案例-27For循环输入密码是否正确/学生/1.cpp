#include <stdio.h>
int main()
{
	int a,i=123,b=1;
	printf("ÇëÊäÈëÃÜÂë\n");
	for(scanf("%d",&a);b<3;scanf("%d",&a))
	//for(scanf("%d",&a);b<=3;scanf("%d",&a))
        if(a==i)
	   {printf("»¶Ó­¹âÁÙ\n"); 
	     break;
	   }
	   else
	   {
   		printf("ÃÜÂë´íÎó£¡\n");
   		b++;
	   }
 return 0;
}