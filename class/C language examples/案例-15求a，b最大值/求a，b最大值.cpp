#include <stdio.h>
#include <stdlib.h>
int main() //��a��b�����ֵ
{system("color f0");
	float a,b,max;
scanf("%f,%f",&a,&b);
	 if(a>=b)
	     max=a;
	 //if(a<b) 
	 else
          max=b;		
printf("max=%f\n",max);
return 0;
}