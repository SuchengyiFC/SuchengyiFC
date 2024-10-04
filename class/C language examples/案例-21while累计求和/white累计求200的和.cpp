#include <stdio.h>
int main()
{    
      int i,sum=0; //定义变量i的初值为1,sum的初值为0 
      i=1;
     while(i<=200) //当i>200，条件表达式i<=200的值为假，不执行循环体
  {						//循环体开始
		sum=sum+i;			//第1次累加后，sum的值为1
		i++;					//加完后，i的值加1，为下次累加做准备
	}						//循环体结束
	printf("sum=%d,i=%d\n",sum,i);	//输出1+2+3…+200的累加和
	return 0;
}
