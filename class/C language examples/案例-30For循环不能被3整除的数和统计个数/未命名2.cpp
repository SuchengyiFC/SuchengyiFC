#include<stdio.h>
 main()
{ 	
	int i,n=0;
	for(i=1;i<=100;i++)
	{	
		if(i%3==0)	
		continue;
		printf("%d ¡õ¡÷",i);
		n++;	
	}
printf("\n");		
printf("n=%d ",n);	
}