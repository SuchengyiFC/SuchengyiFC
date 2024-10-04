#include <stdio.h>
#include <string.h>
int len(char *s);
main()
{
char s[100];
 printf("请输入一个字符串：\n");
 gets(s);
 printf("该字符串的长度为：%d\n",len(s));	
} 
 int len(char *s)
 {
 	int lenth=0;
 	while(*(s+lenth)!='\0')
 	lenth++;
 	return lenth;
 }