#include <stdio.h>
#include <math.h>
 main()
{ 
  int i,j=-1;
  double s;   		/*s��Ҫ����Ϊdouble�� */
  for(i=1,s=0;i<=100;i++)
    s = s+pow(j,(i+1))*(1.0/i);	/*��flag�����������*/
  printf("s=%lf\n",s);
} 
