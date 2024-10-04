#include <stdio.h>
#include <stdlib.h>
int main()//if´óÐ¡Ð´»¥»» 1
{system("color f0");//±³¾° 
	char c1,c; 
	  c1=getchar();//scanf("%c",&c1);
	  if(c1>=65&&c1<=90)//if(c1>='A'&&c1<='z')
	    c=c1+32;
      else//if(c1<='A'||c1>='Z')
        c=c1;
    printf("c=%c",c);
	return 0;
}