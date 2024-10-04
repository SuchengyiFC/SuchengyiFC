#include <stdio.h>
main()
{int a;
   char b='y';
   printf("------------------------------------------------\n");
   printf("        学生成绩管理系统，请选择数字进行相应操作\n");
   printf("1:录入学生成绩，输入完成按\"#\"结束;\n");
   printf("2:显示学生成绩；\n");
   printf("3:查询学生成绩；\n");
   printf("4:修改学生成绩；\n");
   printf("5:添加学生记录；\n");
   printf("6:删除学生记录；\n");
   printf("7:学生成绩排序；\n");
   printf("0:退出系统;\n");
   printf("------------------------------------------------\n");
   printf("请在0-7中选择你的选项：\n");
   
   for(scanf("%d",&a);a!=0;scanf("%d",&a)) 
     {if(a==1)
      {printf("请录入成绩:........\n");
      printf("请继续选择:\n");
	  }
      else if(a==2)
       {printf("显示成绩如下：........\n");
        printf("请继续选择:\n");
	   }
      else if(a==3)
      {printf("请输入学生姓名：........\n");
       printf("请继续选择:\n");
	  }
      else if(a==4)
      {printf("请修改学生成绩：........\n");
       printf("请继续选择:\n");
      }
       else if(a==5)
       {printf("请添加学生成绩：........\n");
 	   printf("请继续选择:\n");
        } 
     else if(a==6)
      {
      	  printf("请删除学生记录：........\n"); 
		   printf("请继续选择:\n");
      }
	  
   	else 
      {printf("学生排序为：........\n");
      printf("请继续选择:\n"); 
      }
   }
}
 