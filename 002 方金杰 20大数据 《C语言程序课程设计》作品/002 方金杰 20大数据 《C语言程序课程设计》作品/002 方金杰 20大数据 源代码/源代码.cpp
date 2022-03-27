#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void Menu(),Menu2(),Input(),output(),save(),Query_num(),Query_name(),Edit(),Menu3(),Edit_del(),Menu4(),Sta_sort(),Sta_max(),Sta_min(),Sta_avg(),jidianjisuan(),xiugaixuehao();
int count;//全局变量 
void welcome() 
{ system("title 程序设计课程设计"); 
  system("color 06");
  system("cls");
  printf("\n\n\t\t|======================================|\n"); 
  printf("\t\t|**************************************|\n");
  printf("\t\t|        《程序设计》课程设计          |\n");
  printf("\t\t|          学生成绩管理系统            |\n");
  printf("\t\t|**************************************|\n");
  printf("\t\t|======================================|\n");
  printf("\n\t\t  程序设计：计算机信息学院	");
  printf("\n\t\t  专业    ：数据科学与大数据技术       \n");
  printf("\n\t\t  班级    ：01       \n");
  printf("\n\t\t  学号    ：122792020002       \n");
  printf("\n\t\t  姓名    ：方金杰       \n"); 
  printf("\n\t\t\t2021年3月21日\n");
}
void password()
{ char a[]="123456",b[10];
  printf("请输入密码：");
  gets(b);
  if(strcmp(b,a)==0)
    { printf("密码正确，欢迎进入系统！");
      Menu();
	 } 
  else {
       printf("密码错误!"); 
       password();
       }
}
void Menu()
{ system("cls");
  printf("\t1.学生成绩信息录入\n");
  printf("\t2.学生成绩信息查询\n");
  printf("\t3.学生成绩信息编辑\n");
  printf("\t4.学生成绩信息统计\n");
  printf("\t5.学生成绩信息显示\n");
  printf("\t6.绩点计算器\n");
  printf("\t7.退出系统\n");
  printf("\t请选择菜单选项1-7："); 
  switch(getche()) 
  {  case '1':system("cls");Input();break;
     case '2':system("cls");Menu2();break;
     case '3':system("cls");Menu3();break;
     case '4':system("cls");Menu4();break;
     case '5':system("cls");output();break;
     case '6':system("cls");jidianjisuan();break;
     case '7':printf("\n\t\t感谢使用本系统！\n");exit(0);break; 
     default:printf("\n请重新输入选项1-7：\n");system("pause");Menu();
  }
}
void Menu2()
{  system("cls");
   printf("1.通过学号查询\n");
   printf("2.通过姓名查询\n");
   printf("3.返回主菜单\n");
   switch(getche())
   {  case '1':system("cls");Query_num();break;
      case '2':system("cls");Query_name();break;
      case '3':system("cls");Menu();break;
      default:printf("\n请重新输入选项1-3：\n");system("pause");Menu();
   }
}
void Menu3()
{ system("cls");
  printf("1.学生成绩信息修改\n");
  printf("2.学生成绩信息删除\n");
  printf("3.修改学号\n");
  printf("4.返回主菜单\n");
  switch(getche())
  {  case '1':system("cls");Edit();break;
     case '2':system("cls");Edit_del();break;
     case '3':system("cls");xiugaixuehao();break;
     case '4':system("cls");Menu();break;
     default:printf("\n请重新输入选项1-3：\n");system("pause");Menu();
   } 
}
void Menu4()
{  system("cls");
   printf("1.最高分\n");
   printf("2.最低分\n");
   printf("3.平均分\n");
   printf("4.成绩排名\n");
   printf("5.返回主菜单\n"); 
    switch(getche())
  {  case '1':system("cls");Sta_max();break;
     case '2':system("cls");Sta_min();break;
     case '3':system("cls");Sta_avg();break;
     case '4':system("cls");Sta_sort();break;
     case '5':system("cls");Menu();break;
     default:printf("\n请重新输入选项1-3：\n");system("pause");Menu();
   } 
}
struct stu
{ char num[13];//学号 
  char name[20];//名字 
  int mathscore;//数学成绩 
  int Englishscore;//英语成绩 
  int sum;//总分 
}stu[100];
void Input()//录入成绩 
{ int i,n,t=1;
  stu[100];
  printf("学生信息输入\n");
  printf("请输入学生总人数：");
  scanf("%d",&count);
  for(i=0;i<count;i++)
  {
  printf("请输入第%d个学生的学号:\n",t);
  scanf("%s",&stu[i].num);
  for(n=i-1;n>=0;n--)
  {  if(strcmp(stu[n].num,stu[i].num)==0)
        {
		printf("该学号重复，请重新输入");
		printf("请输入第%d个学生的学号:\n",t);
        scanf("%s",&stu[i].num);
        }
  }
  printf("请输入第%d个学生的姓名:\n",t);
  scanf("%s",&stu[i].name);
  printf("请输入第%d个学生的数学成绩：\n",t);
  scanf("%d",&stu[i].mathscore);
  printf("请输入第%d个学生的英语成绩：\n",t);
  scanf("%d",&stu[i].Englishscore);
  t++;
  stu[i].sum=stu[i].Englishscore+stu[i].mathscore;
   }
  output();
  getch();
  Menu();
}
void output()//输出信息 
{ int i;
  printf("学号\t\t姓名\t\t数学\t\t英语\t\t总分\t\t\n"); 
  for(i=0;i<count;i++)
    {   
	   printf("%s\t\t%s\t\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
       printf("\n");
    }
  system("pause");
  Menu(); 
}
void Query_num()//通过查询学号查询成绩 
{  system("cls");
   printf("请输入您要查找的学号：");
   int i;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {
		  printf("学号\t姓名\t数学\t英语\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
          printf("按任意键返回\n");
          getch();
          Menu();
         }
	 }
	 if(i>=count)
	 {printf("未查找到该学生，请选择\n1.返回\n2.继续\n"); 
	 switch(getche())
	 {  case '1':system("cls");Menu2();break;
	    case '2':system("cls");Query_num();break;
	 }
	 getch();
	 Query_num();
     }
}
void Query_name()//通过查找名字查询成绩 
{  system("cls");
   printf("请输入您要查找的姓名：");
   int i;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].name)==0)
         {
		  printf("学号\t姓名\t数学\t英语\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
          printf("按任意键返回\n");
          getch();
          Menu();
         }
	 }
	 if(i>=count)
	 {
	 printf("未查询到改学生成绩，请重试\n");
	 getch();
	 Query_name();
     }
}
void Edit()//成绩修改 
{  system("cls");
   printf("请输入您要修改的学号：");
   int i,n;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {printf("请输入新的学生成绩信息\n");
          printf("请输入学生的学号:\n");
          scanf("%s",&stu[i].num);
          printf("请输入学生的姓名:\n");
          scanf("%s",&stu[i].name);
          printf("请输入学生的数学成绩：\n");
          scanf("%d",&stu[i].mathscore);
          printf("请输入学生的英语成绩：\n");
          scanf("%d",&stu[i].Englishscore);
          stu[i].sum=stu[i].Englishscore+stu[i].mathscore;
		  printf("学号\t姓名\t数学\t英语\t总分\n");
          printf("%s\t%s\t%d\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
         }
		  else if(i>=count) printf("未查询到改学生成绩，请重试\n");
            
	 }getch();
}
void xiugaixuehao()
{ system("cls");
   printf("请输入您要修改学号的名字：");
   int i,n;
   char a[13];
   scanf("%s",&a);
   for(i=1;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {
          printf("请输入该学生的学号:\n");
          scanf("%s",&stu[i].num);
           for(n=i-1;n>=0;n--)
       {
		 if(strcmp(stu[n].num,stu[i].num)==0)
            {
			printf("该学号重复，请重新输入：");
            scanf("%s",&stu[i].num);} 
       } 
		  printf("学号\t姓名\t数学\t英语\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum); 
         }
		  else if(i>=count) printf("未查询到改学生信息，请重试\n");
            
	 }getch();
 } 
void Edit_del()//删除信息 
{ system("cls");
  printf("请输入您要删除的学生学号：");
  int i,n;
  char a[13];
  scanf("%s",&a);
  for(i=0;i<count;i++)
    { if(strcmp(a,stu[i].num)==0)
        {  for(n=i;n<=count;++n)
           {  stu[i]=stu[n];
        
	       }printf("删除成功！");
		    getch();
	        Menu3();	   
        }
	  else printf("未查询到改学生成绩，请重试\n");
	}
	getch();
	Menu3();
}
void Sta_max()//最高分 
{ int i,j,t;
   stu[100];
   char a[100];
   for(i=1;i<count;i++)
      for(j=0;j<count-i;j++)
         if(stu[j].sum>stu[j+1].sum)
           { t=stu[j].sum;
             stu[j].sum=stu[j+1].sum;
             stu[j+1].sum=t;
             strcpy(a,stu[j].num);
             strcpy(stu[j].num,stu[j+1].num);
             strcpy(stu[j+1].num,a);
             strcpy(a,stu[j].name);
             strcpy(stu[j].name,stu[j+1].name);
             strcpy(stu[j+1].name,a);
             t=stu[j].mathscore;
             stu[j].mathscore=stu[j+1].mathscore;
             stu[j+1].mathscore=t;
             t=stu[j].Englishscore;
             stu[j].Englishscore=stu[j+1].Englishscore;
             stu[j+1].Englishscore=t;
		   }
	printf("学号\t姓名\t数学\t英语\t总分\n");
	printf("%s\t%s\t%d\t%d\t%d\n",stu[count-1].num,stu[count-1].name,stu[count-1].mathscore,stu[count-1].Englishscore,stu[count-1].sum);
	getch();
	Menu4();
}
void Sta_min()//最低分 
{  int i,j,t;
   stu[100];
   char a[100];
   for(i=1;i<count;i++)
      for(j=0;j<count-i;j++)
         if(stu[j].sum>stu[j+1].sum)
           { 
		     t=stu[j].sum;
             stu[j].sum=stu[j+1].sum;
             stu[j+1].sum=t;
             strcpy(a,stu[j].num);
             strcpy(stu[j].num,stu[j+1].num);
             strcpy(stu[j+1].num,a);
             strcpy(a,stu[j].name);
             strcpy(stu[j].name,stu[j+1].name);
             strcpy(stu[j+1].name,a);
             t=stu[j].mathscore;
             stu[j].mathscore=stu[j+1].mathscore;
             stu[j+1].mathscore=t;
             t=stu[j].Englishscore;
             stu[j].Englishscore=stu[j+1].Englishscore;
             stu[j+1].Englishscore=t;   
		   }
	printf("学号\t姓名\t数学\t英语\t总分\n");
	printf("%s\t%s\t%d\t%d\t%d\n",stu[0].num,stu[0].name,stu[0].mathscore,stu[0].Englishscore,stu[0].sum);
	getch();
	Menu4();
}
void Sta_avg()//平均分 
{  int s=0,i;
   float aver;
   stu[100];
   for(i=0;i<=count;i++)
     {s=s+stu[i].sum;
	 }
   aver=s/count;
   printf("%f",aver);
}
void Sta_sort()//成绩排名 
{  int i,j,t;
   stu[100];
   char a[100];
   for(i=1;i<count;i++)
      for(j=0;j<count-i;j++)
         if(stu[j].sum>stu[j+1].sum)
           { t=stu[j].sum;
             stu[j].sum=stu[j+1].sum;
             stu[j+1].sum=t;
             strcpy(a,stu[j].num);
             strcpy(stu[j].num,stu[j+1].num);
             strcpy(stu[j+1].num,a);
             strcpy(a,stu[j].name);
             strcpy(stu[j].name,stu[j+1].name);
             strcpy(stu[j+1].name,a);
             t=stu[j].mathscore;
             stu[j].mathscore=stu[j+1].mathscore;
             stu[j+1].mathscore=t;
             t=stu[j].Englishscore;
             stu[j].Englishscore=stu[j+1].Englishscore;
             stu[j+1].Englishscore=t;
             
		   }
	printf("排序完成！\n");
	output();
	getch();
	Menu4();
}
void jidianjisuan()//绩点 
{  system("cls");
   int a,b;
   float i,t;
   printf("请输入成绩信息\n");
   printf("请输入学生的数学成绩：\n");
   scanf("%d",&a);
   printf("请输入学生的英语成绩：\n");
   scanf("%d",&b);
   i=(a/10)-5+(b/10)-5;
   t=i/2;
   printf("绩点=%f,平均绩点=%f",i,t);
   getch();
   Menu();
}
int main()
{ welcome();
  password(); 
  return 0;
 }
