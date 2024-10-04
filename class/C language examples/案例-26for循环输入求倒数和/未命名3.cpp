#include <stdio.h>
#include <math.h>
 main()
{ 
  int i,j=-1;
  double s;   		/*s需要定义为double型 */
  for(i=1,s=0;i<=100;i++)
    s = s+pow(j,(i+1))*(1.0/i);	/*用flag处理符号问题*/
  printf("s=%lf\n",s);
} 
