#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
void Menu(),Menu2(),Input(),output(),save(),Query_num(),Query_name(),Edit(),Menu3(),Edit_del(),Menu4(),Sta_sort(),Sta_max(),Sta_min(),Sta_avg(),jidianjisuan(),xiugaixuehao();
int count;//ȫ�ֱ��� 
void welcome() 
{ system("title ������ƿγ����"); 
  system("color 06");
  system("cls");
  printf("\n\n\t\t|======================================|\n"); 
  printf("\t\t|**************************************|\n");
  printf("\t\t|        ��������ơ��γ����          |\n");
  printf("\t\t|          ѧ���ɼ�����ϵͳ            |\n");
  printf("\t\t|**************************************|\n");
  printf("\t\t|======================================|\n");
  printf("\n\t\t  ������ƣ��������ϢѧԺ	");
  printf("\n\t\t  רҵ    �����ݿ�ѧ������ݼ���       \n");
  printf("\n\t\t  �༶    ��01       \n");
  printf("\n\t\t  ѧ��    ��122792020002       \n");
  printf("\n\t\t  ����    �������       \n"); 
  printf("\n\t\t\t2021��3��21��\n");
}
void password()
{ char a[]="123456",b[10];
  printf("���������룺");
  gets(b);
  if(strcmp(b,a)==0)
    { printf("������ȷ����ӭ����ϵͳ��");
      Menu();
	 } 
  else {
       printf("�������!"); 
       password();
       }
}
void Menu()
{ system("cls");
  printf("\t1.ѧ���ɼ���Ϣ¼��\n");
  printf("\t2.ѧ���ɼ���Ϣ��ѯ\n");
  printf("\t3.ѧ���ɼ���Ϣ�༭\n");
  printf("\t4.ѧ���ɼ���Ϣͳ��\n");
  printf("\t5.ѧ���ɼ���Ϣ��ʾ\n");
  printf("\t6.���������\n");
  printf("\t7.�˳�ϵͳ\n");
  printf("\t��ѡ��˵�ѡ��1-7��"); 
  switch(getche()) 
  {  case '1':system("cls");Input();break;
     case '2':system("cls");Menu2();break;
     case '3':system("cls");Menu3();break;
     case '4':system("cls");Menu4();break;
     case '5':system("cls");output();break;
     case '6':system("cls");jidianjisuan();break;
     case '7':printf("\n\t\t��лʹ�ñ�ϵͳ��\n");exit(0);break; 
     default:printf("\n����������ѡ��1-7��\n");system("pause");Menu();
  }
}
void Menu2()
{  system("cls");
   printf("1.ͨ��ѧ�Ų�ѯ\n");
   printf("2.ͨ��������ѯ\n");
   printf("3.�������˵�\n");
   switch(getche())
   {  case '1':system("cls");Query_num();break;
      case '2':system("cls");Query_name();break;
      case '3':system("cls");Menu();break;
      default:printf("\n����������ѡ��1-3��\n");system("pause");Menu();
   }
}
void Menu3()
{ system("cls");
  printf("1.ѧ���ɼ���Ϣ�޸�\n");
  printf("2.ѧ���ɼ���Ϣɾ��\n");
  printf("3.�޸�ѧ��\n");
  printf("4.�������˵�\n");
  switch(getche())
  {  case '1':system("cls");Edit();break;
     case '2':system("cls");Edit_del();break;
     case '3':system("cls");xiugaixuehao();break;
     case '4':system("cls");Menu();break;
     default:printf("\n����������ѡ��1-3��\n");system("pause");Menu();
   } 
}
void Menu4()
{  system("cls");
   printf("1.��߷�\n");
   printf("2.��ͷ�\n");
   printf("3.ƽ����\n");
   printf("4.�ɼ�����\n");
   printf("5.�������˵�\n"); 
    switch(getche())
  {  case '1':system("cls");Sta_max();break;
     case '2':system("cls");Sta_min();break;
     case '3':system("cls");Sta_avg();break;
     case '4':system("cls");Sta_sort();break;
     case '5':system("cls");Menu();break;
     default:printf("\n����������ѡ��1-3��\n");system("pause");Menu();
   } 
}
struct stu
{ char num[13];//ѧ�� 
  char name[20];//���� 
  int mathscore;//��ѧ�ɼ� 
  int Englishscore;//Ӣ��ɼ� 
  int sum;//�ܷ� 
}stu[100];
void Input()//¼��ɼ� 
{ int i,n,t=1;
  stu[100];
  printf("ѧ����Ϣ����\n");
  printf("������ѧ����������");
  scanf("%d",&count);
  for(i=0;i<count;i++)
  {
  printf("�������%d��ѧ����ѧ��:\n",t);
  scanf("%s",&stu[i].num);
  for(n=i-1;n>=0;n--)
  {  if(strcmp(stu[n].num,stu[i].num)==0)
        {
		printf("��ѧ���ظ�������������");
		printf("�������%d��ѧ����ѧ��:\n",t);
        scanf("%s",&stu[i].num);
        }
  }
  printf("�������%d��ѧ��������:\n",t);
  scanf("%s",&stu[i].name);
  printf("�������%d��ѧ������ѧ�ɼ���\n",t);
  scanf("%d",&stu[i].mathscore);
  printf("�������%d��ѧ����Ӣ��ɼ���\n",t);
  scanf("%d",&stu[i].Englishscore);
  t++;
  stu[i].sum=stu[i].Englishscore+stu[i].mathscore;
   }
  output();
  getch();
  Menu();
}
void output()//�����Ϣ 
{ int i;
  printf("ѧ��\t\t����\t\t��ѧ\t\tӢ��\t\t�ܷ�\t\t\n"); 
  for(i=0;i<count;i++)
    {   
	   printf("%s\t\t%s\t\t%d\t\t%d\t\t%d",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
       printf("\n");
    }
  system("pause");
  Menu(); 
}
void Query_num()//ͨ����ѯѧ�Ų�ѯ�ɼ� 
{  system("cls");
   printf("��������Ҫ���ҵ�ѧ�ţ�");
   int i;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {
		  printf("ѧ��\t����\t��ѧ\tӢ��\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
          printf("�����������\n");
          getch();
          Menu();
         }
	 }
	 if(i>=count)
	 {printf("δ���ҵ���ѧ������ѡ��\n1.����\n2.����\n"); 
	 switch(getche())
	 {  case '1':system("cls");Menu2();break;
	    case '2':system("cls");Query_num();break;
	 }
	 getch();
	 Query_num();
     }
}
void Query_name()//ͨ���������ֲ�ѯ�ɼ� 
{  system("cls");
   printf("��������Ҫ���ҵ�������");
   int i;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].name)==0)
         {
		  printf("ѧ��\t����\t��ѧ\tӢ��\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
          printf("�����������\n");
          getch();
          Menu();
         }
	 }
	 if(i>=count)
	 {
	 printf("δ��ѯ����ѧ���ɼ���������\n");
	 getch();
	 Query_name();
     }
}
void Edit()//�ɼ��޸� 
{  system("cls");
   printf("��������Ҫ�޸ĵ�ѧ�ţ�");
   int i,n;
   char a[13];
   scanf("%s",&a);
   for(i=0;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {printf("�������µ�ѧ���ɼ���Ϣ\n");
          printf("������ѧ����ѧ��:\n");
          scanf("%s",&stu[i].num);
          printf("������ѧ��������:\n");
          scanf("%s",&stu[i].name);
          printf("������ѧ������ѧ�ɼ���\n");
          scanf("%d",&stu[i].mathscore);
          printf("������ѧ����Ӣ��ɼ���\n");
          scanf("%d",&stu[i].Englishscore);
          stu[i].sum=stu[i].Englishscore+stu[i].mathscore;
		  printf("ѧ��\t����\t��ѧ\tӢ��\t�ܷ�\n");
          printf("%s\t%s\t%d\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum);
         }
		  else if(i>=count) printf("δ��ѯ����ѧ���ɼ���������\n");
            
	 }getch();
}
void xiugaixuehao()
{ system("cls");
   printf("��������Ҫ�޸�ѧ�ŵ����֣�");
   int i,n;
   char a[13];
   scanf("%s",&a);
   for(i=1;i<count;i++)
     { if(strcmp(a,stu[i].num)==0)
         {
          printf("�������ѧ����ѧ��:\n");
          scanf("%s",&stu[i].num);
           for(n=i-1;n>=0;n--)
       {
		 if(strcmp(stu[n].num,stu[i].num)==0)
            {
			printf("��ѧ���ظ������������룺");
            scanf("%s",&stu[i].num);} 
       } 
		  printf("ѧ��\t����\t��ѧ\tӢ��\n");
          printf("%s\t%s\t%d\t%d\n",stu[i].num,stu[i].name,stu[i].mathscore,stu[i].Englishscore,stu[i].sum); 
         }
		  else if(i>=count) printf("δ��ѯ����ѧ����Ϣ��������\n");
            
	 }getch();
 } 
void Edit_del()//ɾ����Ϣ 
{ system("cls");
  printf("��������Ҫɾ����ѧ��ѧ�ţ�");
  int i,n;
  char a[13];
  scanf("%s",&a);
  for(i=0;i<count;i++)
    { if(strcmp(a,stu[i].num)==0)
        {  for(n=i;n<=count;++n)
           {  stu[i]=stu[n];
        
	       }printf("ɾ���ɹ���");
		    getch();
	        Menu3();	   
        }
	  else printf("δ��ѯ����ѧ���ɼ���������\n");
	}
	getch();
	Menu3();
}
void Sta_max()//��߷� 
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
	printf("ѧ��\t����\t��ѧ\tӢ��\t�ܷ�\n");
	printf("%s\t%s\t%d\t%d\t%d\n",stu[count-1].num,stu[count-1].name,stu[count-1].mathscore,stu[count-1].Englishscore,stu[count-1].sum);
	getch();
	Menu4();
}
void Sta_min()//��ͷ� 
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
	printf("ѧ��\t����\t��ѧ\tӢ��\t�ܷ�\n");
	printf("%s\t%s\t%d\t%d\t%d\n",stu[0].num,stu[0].name,stu[0].mathscore,stu[0].Englishscore,stu[0].sum);
	getch();
	Menu4();
}
void Sta_avg()//ƽ���� 
{  int s=0,i;
   float aver;
   stu[100];
   for(i=0;i<=count;i++)
     {s=s+stu[i].sum;
	 }
   aver=s/count;
   printf("%f",aver);
}
void Sta_sort()//�ɼ����� 
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
	printf("������ɣ�\n");
	output();
	getch();
	Menu4();
}
void jidianjisuan()//���� 
{  system("cls");
   int a,b;
   float i,t;
   printf("������ɼ���Ϣ\n");
   printf("������ѧ������ѧ�ɼ���\n");
   scanf("%d",&a);
   printf("������ѧ����Ӣ��ɼ���\n");
   scanf("%d",&b);
   i=(a/10)-5+(b/10)-5;
   t=i/2;
   printf("����=%f,ƽ������=%f",i,t);
   getch();
   Menu();
}
int main()
{ welcome();
  password(); 
  return 0;
 }
