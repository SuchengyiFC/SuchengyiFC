#include <stdio.h>
int main()
{
	int a,i=123,b=1;
	printf("����������\n");
	for(scanf("%d",&a);b<3;scanf("%d",&a))
	//for(scanf("%d",&a);b<=3;scanf("%d",&a))
        if(a==i)
	   {printf("��ӭ����\n"); 
	     break;
	   }
	   else
	   {
   		printf("�������\n");
   		b++;
	   }
 return 0;
}