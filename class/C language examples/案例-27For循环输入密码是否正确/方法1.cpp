#include <stdio.h>
int main()
{
	int i;
	int a,b=456;
	printf("����������\n");
	for(i=3;i>=1&&i<=3;i--)
        { scanf("%d",&a);
		  if(a==b)
	      {printf("����������ȷ�����¼\n");
	      i=0;
	       }
	    else
	    {if(i==1)
	    printf("�������벻��ȷ�����Ժ���\n");
	    else 
	    printf("�������벻��ȷ������������\n");
	    } 
	   } 
	   printf("i=%d",i); 
 return 0;
}