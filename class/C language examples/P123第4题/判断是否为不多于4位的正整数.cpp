#include <stdio.h>
main()
{
int x,n;
printf("请输入的x数值为：");
scanf("%d",&x);
n=0;
if(x<=0||x>=10000)
 printf("Data Error！\n");
else
{{
if(x<10) n=1;
else if(x<100) n=2;
else if(x<1000) n=3;
else n=4;
}
printf( "n=%d位\n",n);
} 
}
