#include <stdio.h>
#include <string.h>
main()
{
	char str1[50],str2[10];
	int d;
	gets(str1);
	//gets(str2);
  strlwr(str1);//字符串大写转换成小写 
	puts(str1);
	gets(str2);
	strupr(str2);//字符串小写转换成大写 
	puts(str2);
} 