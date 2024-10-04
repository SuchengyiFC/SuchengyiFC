#include <stdio.h>
int main()
{
	int i,s1=0,s2=0;

	for(scanf("%d",&i);i!=-1;scanf("%d",&i))
	   {if(i%2==0)
	      {s1=s1+i;
	      printf("i的偶数有%d\n",i); 
	      
       } 
	      else
	      {s2=s2+i;
	      printf("i的奇数有%d\n",i);
	      } 
        //scanf("%d",&i);
	   }
	   printf("偶数结果s1=%d,奇数结果s2=%d\n",s1,s2);
	   
}