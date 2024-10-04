#include <stdio.h>
#include <string.h>
main()
{
	char str1[50],str2[10];
	gets(str1);
	gets(str2);
strcpy(str1,str2);//字符串按照指定个数复制 
	//	strncpy(str1,str2,2);//字符串按照指定个数复制 
	puts(str1);
} 