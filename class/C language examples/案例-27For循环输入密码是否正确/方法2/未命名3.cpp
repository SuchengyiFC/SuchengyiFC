#include <stdio.h>
int main()
{
	int i=1;
	int a,b=456;
	printf("ÇëÊäÈëÃÜÂë\n");
    for(;i<=3;i++)
       {scanf("%d",&a);
          if(a==b)
          {
          	printf("ÊäÈëÃÜÂëÕıÈ·£¬ÇëµÇÂ¼£¡\n");
          	i=3;
          }
          if(a!=b)
          { 
          	if(i!=3)
			  printf("ÊäÈëÃÜÂë´íÎó£¬ÇëÖØĞÂÊäÈë!\n");
		    else
		     printf("ÊäÈëÃÜÂë´íÎó£¬ÇëÉÔºó³¢ÊÔ!\n");
          }
       }
       printf("i=%d",i);
 return 0;
}