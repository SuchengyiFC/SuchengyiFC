#include <stdio.h>
#include <string.h>
main()
{
	char str1[50],str2[10];
	int d;
	gets(str1);
	//gets(str2);
  strlwr(str1);//�ַ�����дת����Сд 
	puts(str1);
	gets(str2);
	strupr(str2);//�ַ���Сдת���ɴ�д 
	puts(str2);
} 