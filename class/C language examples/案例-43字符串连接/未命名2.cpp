#include <stdio.h>
#include <string.h>
main()
{
	char str1[50],str2[10];
	gets(str1);
	gets(str2);
	strcat(str1,str2);//字符串连接 
	puts(str1);
} 