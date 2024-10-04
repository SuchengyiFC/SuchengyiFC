#include <stdio.h>
int main()//字符输入 
{
	char a[20]={97,'t','f','y'};
	int i;
	for(i=0;i<=2;i++)
	scanf("%c",&a[i]);//字符输入不加空格 
	for(i=0;i<20;i++)
	printf("%c",a[i]);
	//printf("\n");
} 