#include <stdio.h>
int main()
{
	int i=1;
	int a,b=456;
	printf("����������\n");
    for(;i<=3;i++)
       {scanf("%d",&a);
          if(a==b)
          {
          	printf("����������ȷ�����¼��\n");
          	i=3;
          }
          if(a!=b)
          { 
          	if(i!=3)
			  printf("���������������������!\n");
		    else
		     printf("��������������Ժ���!\n");
          }
       }
       printf("i=%d",i);
 return 0;
}