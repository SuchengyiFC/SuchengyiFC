#include <stdio.h>
const double Pi=3.14159; /*定义常量，加分号*/
 double sum(int k)
 {
 	return Pi*k*k;
 }
 
main() /*求圆面积*/ 
{
   //const double Pi=3.14159;
   int r=4;
   double s;
   s=sum(r);
    printf("圆面积s=%lf\n",s);
}
