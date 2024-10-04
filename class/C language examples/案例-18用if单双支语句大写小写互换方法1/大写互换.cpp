#include <stdio.h>
#include <stdlib.h>
int main()//if´óÐ¡Ð´»¥»» 
{system("color f0");//±³¾° 
	char c1,c; 
	  c1=getchar();//scanf("%c",&c1);
 if(c1>='A'&&c1<='z'||c1>='a'&&c1<='z')
      {if(c1>='a'&&c1<='z')
        c=c1-32;
      if(c1>='A'&&c1<='Z')
        c=c1+32;
      }
 else
  c=c1;       
 printf("c=%c",c);
	return 0;
}