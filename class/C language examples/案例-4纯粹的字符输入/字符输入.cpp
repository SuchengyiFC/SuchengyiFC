#include <stdio.h>	//注明输入输出函数使用的头文件
#include <stdlib.h> 
 int main()
{
	
	char x;
	char y,z;
	scanf("%c%c%c",&x,&y,&z);//输入方法是连输 
    //scanf("x=%c,y=%c,z=%c",&x,&y,&z);
	printf("x=%c,y=%c,z=%c\n",x,y,z);
		system("pause");
	return 0;

}