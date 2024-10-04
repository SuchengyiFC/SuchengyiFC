#include <stdio.h>
#include <stdlib.h>
int main()//大小写互换 
{system("color f0");//背景 
	char c1,c2;
	//char c;
	int c;
	c1=getchar();
	c=c1+32;
	printf("AscII值是：%d\n",c1);
	printf("大写转换结果是：");
    putchar(c); 
	return 0;
}