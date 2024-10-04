#include <stdio.h>
main()
{
	int a[3][4];
	int i,j,n;
	for(i=0;i<=2;i++)
	  for(j=0;j<=3;j++)
	   scanf("%d",&a[i][j]);
   for(i=0;i<=2;i++)
	  {for(j=0;j<=3;j++)
	   {printf("a[%d][%d]=%d ",i,j,a[i][j]);
	   n++;
	   if(n%4==0)
	   printf("\n");
	   }
 
	  }
} 