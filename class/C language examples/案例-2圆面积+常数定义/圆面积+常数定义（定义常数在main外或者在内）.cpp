#include <stdio.h>
const double Pi=3.14159; /*���峣�����ӷֺ�*/
 double sum(int k)
 {
 	return Pi*k*k;
 }
 
main() /*��Բ���*/ 
{
   //const double Pi=3.14159;
   int r=4;
   double s;
   s=sum(r);
    printf("Բ���s=%lf\n",s);
}
