#include <stdio.h>
#include <string.h>
void ins(char s[],int pos,char c)//posָ��λ��
{
	int i;
	for(i=strlen(s);i>=pos;i--)
	s[i]=s[i-1];//�������һ��λ���ƶ� 
	s[pos]=c;
}
main()
{char str1[80],c;
int a;
printf("������һ���ַ���\n"); 
gets(str1);
printf("������ָ��λ�úͲ���ָ���ַ�");
scanf("%d,%c",&a,&c);//����λ�ú�
ins(str1,a,c);
printf("%s",str1);
} 