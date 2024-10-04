#include <stdio.h>
int main()
{
	int i;
	int a,b=456;
	printf("请输入密码\n");
	for(i=3;i>=1&&i<=3;i--)
        { scanf("%d",&a);
		  if(a==b)
	      {printf("输入密码正确，请登录\n");
	      i=0;
	       }
	    else
	    {if(i==1)
	    printf("输入密码不正确，请稍后尝试\n");
	    else 
	    printf("输入密码不正确，请重新输入\n");
	    } 
	   } 
	   printf("i=%d",i); 
 return 0;
}