#include <stdio.h>
#include <string.h>
int len(char *s);
main()
{
char s[100];
 printf("������һ���ַ�����\n");
 gets(s);
 printf("���ַ����ĳ���Ϊ��%d\n",len(s));	
} 
 int len(char *s)
 {
 	int lenth=0;
 	while(*(s+lenth)!='\0')
 	lenth++;
 	return lenth;
 }