#include <stdio.h>
int main()
{
	int i,s1=0,s2=0;

	for(scanf("%d",&i);i!=-1;scanf("%d",&i))
	   {if(i%2==0)
	      {s1=s1+i;
	      printf("i��ż����%d\n",i); 
	      
       } 
	      else
	      {s2=s2+i;
	      printf("i��������%d\n",i);
	      } 
        //scanf("%d",&i);
	   }
	   printf("ż�����s1=%d,�������s2=%d\n",s1,s2);
	   
}