#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,j,k;
	for(i=-3;i<=3;i++)
	 {for(j=1;j<=abs(i);j++)
	   printf(" ");
      for(j=1;j<=7-2*abs(i);j++)
	   printf("*");
	   printf("\n");
	 }
} 