#include <stdio.h>
int max(int x,int y)//指定函数为整型，也就是返回z为整型
{	int z;		//声明部分	
	if(x>y)//执行语句部分
	   z=x;
	   else
	   z=y;
	return(z);         //返回z值
}
main()
{
  int x; 
  x=max(5,max(3,6));
  printf("%d",x);
}
