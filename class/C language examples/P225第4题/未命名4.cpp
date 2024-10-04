#include <stdio.h>
#include <string.h>
void ins(char s[],int pos,char c)//pos指定位置
{
	int i;
	for(i=strlen(s);i>=pos;i--)
	s[i]=s[i-1];//依次向后一个位置移动 
	s[pos]=c;
}
main()
{char str1[80],c;
int a;
printf("请输入一串字符串\n"); 
gets(str1);
printf("请输入指定位置和插入指定字符");
scanf("%d,%c",&a,&c);//输入位置和
ins(str1,a,c);
printf("%s",str1);
} 