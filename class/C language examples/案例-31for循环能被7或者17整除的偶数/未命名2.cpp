#include<stdio.h>
 main()
{ 	
	int i,n=0,sum=0;
	for(i=1;i<=300;i++)
	{	
	      if(i%7==0||i%17==0)	
	           if(i%2==0)	
	           { n++;
                printf("%d  ",i);
                 sum+=i;
                 if(n%5==0)
                 printf("\n");
       }	           
    }
 printf("\n");
 printf("sum=%d ",sum); 
}
