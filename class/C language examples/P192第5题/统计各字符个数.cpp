#include <stdio.h>
#include <string.h> 
int main()
{
	int i,j,n1=0,n2=0,n3=0,n4=0,n5=0,;
	char str[3][80];
	printf("������3������\n");				
	for(i=0;i<3;i++)
		gets(str[i]);
	for(i=0;i<3;i++)
	  for(j=0;str[i][j]!='\0';j++)
	     {if(str[i][j]>='A'&&str[i][j]<='Z')
	          n1++;
         else if(str[i][j]>='a'&&str[i][j]<='z')
              n2++;
         else if(str[i][j]>='0'&&str[i][j]<='9') 
		        n3++;
		  else if(str[i][j]==32) 
		        n4++;
           else
           n5++;
	     }
	     printf("\n"); 
	     printf("Ӣ�Ĵ�д��ĸͳ�Ƹ���Ϊ��%d\n",n1); 
	     printf("Ӣ��Сд��ĸͳ�Ƹ���Ϊ��%d\n",n2);
	     printf("����ͳ�Ƹ���Ϊ��%d\n",n3);
         printf("�ո����Ϊ��%d\n",n4);
	     printf("�����ַ�����Ϊ��%d\n",n5);
	return 0;
}
