#include <stdio.h>
int main()
{    
      int i,n,p=1; 
      i=1;
     
     do 
  {
      p=p*i;		
      i++;				
   }while(i<=5); 					
	printf("p=%ld,i=%d\n",p,i);
	return 0;
}