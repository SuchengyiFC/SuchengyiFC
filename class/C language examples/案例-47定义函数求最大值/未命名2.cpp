#include <stdio.h>
int max(int x,int y)//ָ������Ϊ���ͣ�Ҳ���Ƿ���zΪ����
{	int z;		//��������	
	if(x>y)//ִ����䲿��
	   z=x;
	   else
	   z=y;
	return(z);         //����zֵ
}
main()
{
  int x; 
  x=max(5,max(3,6));
  printf("%d",x);
}
