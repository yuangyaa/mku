#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//声明函数
void student_input();//学生信息导入
int student_delete();//学生信息删除
void student_replace();//学生信息修改
void student_search();//学生信息查询
void student_information_all();//所有学生信息

void system_menu();//系统菜单
void system_department();//部门系统
void system_teacher();//教师管理员
void system_student();//学生

void menu_department();//部门选择菜单
void menu_teacher();//教师管理员选择系统
void menu_student();//学生

//void student_healthy_unusually()存在风险学生
//void student_healthy_danger()健康异常学生
//void college_healthy()//学院健康统计
//void college_healthy_sum()//各学院健康统计
//void college_healthy_sum()//各学院健康统计
//void teacher_admin()//教 师 授 权
//void student_healthy_all()//学生健康情况
//int student_healthy_input()//每日健康打卡
void bound(char ch,int n);

char *modi_field(char *field,char *content,int len)
{
	char *str;
	str=malloc(sizeof(char)*len);
	if(str==NULL)
	{
		printf("\n内存分配失败，按任意键退出!\n");
		getch();
		return 0;
	}
	printf("原来%s为:%s\n",field,content);
	printf("修改为(内容不超过%d个字符):  ",len);
	scanf("%s",str);
	return str;
}

typedef struct student_information//个人信息查询
    {
       char name[20];//姓名 
       char college[20];//学院 
       char grade[20];//年级
       char sdept[20];//专业        
       char sno[20];//身份证号码 
       char tel[20];//联系方式 
    }information;
/*    information inf[20]={
    	{"张三","计算机信息学院","2020","计算机科学与技术",\
    	"350303123123123123","15612312312"},\
{"李四""计算机信息学院","2020","网络工程",\
"350321131313131313","13313131331"}
}*/

information *inf_first,*inf_end;
char gsave,gfirst;

void bound(char ch,int n)
{
    while(n--)
		putch(ch);
	printf("\n");
	return;
}

void readdata()//读取数据
{
	FILE *fp;
	information *inf1;
	if((fp=fopen("student_information.txt","rb"))==NULL)
	{
		gfirst=1;
		return;
	}
	while(!feof(fp))
	{
		emp1=(information *)malloc(sizeof(information));
		if(inf1==NULL)
		{
			printf("内存非配失败,按任意键退出!\n");
			getch();
			return;
		}
		fread(inf1,sizeof(information1,fp);
		if(feof(fp))
			break;
		if(inf_first==NULL)
		{
			inf_first=inf1;
			inf_end=inf1;
		}
		else
		{
			inf_end->next=inf1;
			inf_end=inf1;
		}
		inf_end->next=NULL;
	}
	gfirst=0;
	fclose(fp);
}

void student_input()
{
	FILE *fp;
	information *inf1;
    int i=0;
    char sign;

	if((fp=fopen("student_information.txt","ab"))==NULL)
	{
		printf("打开文件employee.txt出错!\n");
		getch();
		return;
	}
	do
	{
		i++;
		inf1=(information*)malloc(sizeof(information));
		if(inf1==NULL)
		{
			printf("内存分配失败,请按任意键退出!\n");
			getch();
			return;
		}
		printf("\n\t请输入第%d各学生的信息\n",i);
		bound('_',40);
		printf("姓名:  ");
		scanf("%d",&inf1->name);
		printf("学院:  ");
		scanf("%s",&inf1->college);
		printf("年级:  ");
		scanf("%s",&inf1->grade);
		printf("专业:  ");
		scanf("%s",&inf1->sdept);
		printf("身份证号码:  ");
		scanf("%d",&inf1->sno);
		printf("联系方式:  ");
		scanf("%s",&inf1->tel);

		inf1->next=NULL;
		if(inf_first==NULL)
		{
			inf_first=inf1;
			inf_end=inf1;
		}
		else
		{
			inf_end->next=inf1;
			inf_end=inf1;
		}
		fwrite(inf_end,sizeof(information),1,fp);
		gfirst=0;
		printf("\n");
		bound('_',40);
		printf("\n是否继续输入?(y/n)  ");
		fflush(stdin);
		choice=getchar();
		if(toupper(choice)!='Y')
		{
			fclose(fp);
			printf("\n输入完毕，请按任意键返回!\n");
			getch();
			return;
		}
		system("cls");
	}while(1);
}




/*    while(sign!='n'&&sign!='N')
    {
        printf("\t\t姓名:" );
        scanf("\t%s",&inf_stu[n+i].name);
        printf("\t\t学院:" );
        scanf("\t%s",&inf_stu[n+i].college);  
        printf("\t\t年级:" );
        scanf("\t%s",&inf_stu[n+i].grade);
        printf("\t\t专业:" );
        scanf("\t%s",&inf_stu[n+i].sdept);
        printf("\t\t身份证号码:" );
        scanf("\t%s",&inf_stu[n+i].sno);
        printf("\t\t联系方式:" );
        scanf("\t%s",&inf_stu[n+i].tel);

        printf("\t\t是否继续添加？(Y/N)" );
        scanf("\t%c",&sign);
        i++;
    }
    return(n+i);
}
*/
void student_delete()
{
	int findok=0;
    imformation *inf1,*inf2;
	char name[10],choice;
	system("cls");
	printf("\n请输入要删除的员工的姓名:  ");
	scanf("%s",name);
	inf1=inf_first;
	inf2=inf1;
	while(inf1)
	{
		if(strcmp(inf1->name,name)==0)
		{
			findok=1;
			system("cls");
			printf("\n员工 %s 的信息如下: \n  ",inf1->name);
			bound('_',40);
			printf("姓名: %d \n",inf1->name);
		    printf("学院: %s \n",inf1->college);
		    printf("年级: %s \n",inf1->grade);
		    printf("专业: %s \n",inf1->sdept);
		    printf("身份证号码: %d \n",inf1->sno);
	     	printf("联系方式: %s \n",inf1->tel);
			bound('_',40);
			printf("\n确定要删除该员工信息?(y/n)  ");
			fflush(stdin);
			choice=getchar();
			if(choice!='y'&&choice!='Y')
				return;
			if(inf1=inf_first)
				inf_first=inf1->next;
			else 
				inf2->next=inf1->next;
			free(inf1);
			gsave=1;
			savedata();
			return;
		}
		else
		{
			inf2=inf1;
			inf1=inf1->next;
		}
	}
		if(!findok)
		{
			bound('_',40);
			printf("\n没有找到姓名是: %s 的信息!\n",name);
			getch();
		}
		return;
}


	/*
    char s[20];
    int i=0,j;
    printf("\t\t\请输入想要删除的学生:" );
    scanf("%s",&s);
    while(strcmp(inf_stu.name,s)!=0&&i<n)
        i++;
    if(i==n)
    {
        printf("\t\t没有这个学生！\n");
        return(n);
    }
    for(j=i;j<n-1;j++)
    {
        strcpy(inf_stu[j].name,inf_stu[j+1].name);
        strcpy(inf_stu[j].college,inf_stu[j+1].college);
        strcpy(inf_stu[j].grade,inf_stu[j+1].grade);
        strcpy(inf_stu[j].sdept,inf_stu[j+1].sdept);
        strcpy(inf_stu[j].sno,inf_stu[j+1].sno);
        strcpy(inf_stu[j].tel,inf_stu[j+1].tel);
    }
    printf("\t\t删除成功！\n");
    return(n-1);
}
*/
void student_replace(information inf_stu[],int n)
{
	information *inf1;
	char name[10],*newcontent;
	int choice;
	printf("\n请输入要修改信息员工的姓名:  ");
    scanf("%s",&name);
	inf1=findname(name);
	displayemp(inf1,"姓名",name);
	if(inf1)
	{
		printf("\t1.修改姓名       \n");
		printf("\t2.修改学院      \n");
		printf("\t3.修改年级    \n");
		printf("\t4.修改专业      \n");
		printf("\t5.修改身份证号码     \n");
		printf("\t6.修改联系方式   \n");
		printf("\t0.返回\n");
		bound('_',40);
		printf("请输入你要修改的信息选项:  \n");
		do
		{			
			fflush(stdin);
			choice=getchar();
			switch(choice)
			{
			case '1':
				newcontent=modi_field("姓名",inf1->name,10);
				if(newcontent!=NULL)
				{
					strcpy(inf1->name,newcontent);
					free(newcontent);
				}
				break;
			case '2':
				newcontent=modi_field("学院",inf1->college,10);
				if(newcontent!=NULL)
				{
					strcpy(inf1->college,newcontent);
					free(newcontent);
				}
				break;
			case '3':
				newcontent=modi_field("年级",inf1->grade,10);
				if(newcontent!=NULL)
				{
					strcpy(inf1->grade,newcontent);
					free(newcontent);
				}
				break;
			case '4':
				newcontent=modi_field("专业",inf1->sdept,10);
				if(newcontent!=NULL)
				{
					strcpy(inf1->sdept,newcontent);
					free(newcontent);
				}			
				break;
			case '5':
				newcontent=modi_field("身份证号码",inf1->sno,20);
				if(newcontent!=NULL)
				{
					strcpy(inf1->sno,newcontent);
					free(newcontent);
				}
				break;
			case '6':
				newcontent=modi_field("联系方式",inf1->tel,13);
				if(newcontent!=NULL)
				{
					strcpy(inf1->tel,newcontent);
					free(newcontent);
				}
				break;
			case '0':
				getch();
				return;
			}
		}while(choice<'0'||choice>'9');
		gsave=1;
		savedata();
		printf("\n信息修改完毕,按任意键退出!\n");
		}
    	return;
}

	/*
    char s[20];
    int i=0;
    printf("请输入想要修改记录学生的名字");
    scanf("%s",s);
    while(strcmp(inf_stu[i].name,s)!=0&&i<n)
        i++;
    if(i==n)
    {
        printf("\t\t没有这个学生！\n");
        return(n);
    }
    printf("\t\t姓名:" );
    scanf("\t%s",&inf_stu[n+i].name);
    printf("\t\t学院:" );
    scanf("\t%s",&inf_stu[n+i].college);  
    printf("\t\t年级:" );
    scanf("\t%s",&inf_stu[n+i].grade);
    printf("\t\t专业:" );
    scanf("\t%s",&inf_stu[n+i].sdept);
    printf("\t\t身份证号码:" );
    scanf("\t%s",&inf_stu[n+i].sno);
    printf("\t\t联系方式:" );
    scanf("\t%s",&inf_stu[n+i].tel);
}
*/
void student_search()
{
/*    int m;
    printf("*****************请选择查询方式************************\n");
    printf("|                ___1:按姓名查询___                   |\n");
    printf("|                ___2:按电话查询___                   |\n");
    printf("|                ___3:按身份证号码查询___              |\n");
    printf("|                ___4:返回上一级___                   |\n");
    printf("                 请选择:                   \n");
*/
	int choice,ret=0,num;
	char str[60];
	EMP *emp1;
	system("cls");
	do{
    printf("*****************请选择查询方式************************\n");
    printf("|                ___1:按姓名查询___                   |\n");
    printf("|                ___2:按电话查询___                   |\n");
    printf("|                ___3:按身份证号码查询___              |\n");
    printf("|                ___4:返回上一级___                   |\n");
    printf("                 请选择:                   \n");
 	    do
		{
		    fflush(stdin);
		    choice=getchar();
		    system("cls");
		    switch(choice)
			{
		        case '1':
			       printf("\n请输入要查询学生的姓名:  ");
			       scanf("%s",str);
			       inf1=findname(str);
			       displayemp(inf1,"姓名",str);
			       getch();
			       break;
		        case '2':
			       printf("\n请输入要查询学生的电话:  ");
			       scanf("%d",&num);
			       inf1=findnum(num);//调用子函数
			       itoa(num,str,10);
			       displayemp(inf1,"电话",str);
				   getch();
			       break;
		        case '3':
		        	printf("\n请输入要查询学生的身份证号码:  ");
			        scanf("%s",str);
			        inf1=findtelephone(str);
			        displayemp(inf1,"身份证号码",str);
		        	getch();
		        	break;
		        case '0':
		        	ret=1;
			        break;
			}
		}while(choice<'0'||choice>'4');
    	system("cls");
    	if(ret)
		     break;
	}while(1);
}

information *findname(char *name)//按姓名查找员工信息
{
	information *inf1;
	inf1=inf_first;
	while(inf1)
	{
		if(strcmp(name,inf1->name)==0)//比较输入的名字和链表中记载的名字是否相同
			return inf1;
		inf1=inf1->next;
	}
	return NULL;
}

information *findnum(int num)//按工号查询
{
	information *inf1;
	inf1=inf_first;
	while(inf1)
	{
		if(num==inf1->num)
			return inf1;
		inf1=inf1->next;
	}
	return NULL;
}

information *findtelephone(char *name)//按电话号码查询员工信息
{
	information *inf1;
	inf1=inf_first;
	while(inf1)
	{
		if(strcmp(name,inf1->tel)
			return inf1;
		inf1=inf1->next;
	}
    return NULL;
}

/*
    scanf("%d",&m);
    while(m!=1&&m!=2&&m!=3&&m!=4)
    {
    	printf("输入错误，请重新输入:");
    	scanf("%d",&m);
    }
    if (m==1)
    {
	    char s[20];
	    int i=0;
	    printf("请输入想要查询学生的姓名");
	    scanf("%s",s);
	    while(strcmp(inf_stu[i].name,s)!=0&&i<n)
	        i++;
	    if(i==n)
	    {
	        printf("\t\t没有这个学生！\n");
	        return;
	    }
	    printf("\n\t\t您查询的学生信息如下:\n");
        printf("\t\t姓名:%s\n",inf_stu[i].name);
        printf("\t\t学院:%s\n",inf_stu[i].college);
        printf("\t\t年级:%s\n",inf_stu[i].grade);
        printf("\t\t专业:%s\n",inf_stu[i].sdept);
        printf("\t\t身份证号码:%s\n",inf_stu[i].sno);
        printf("\t\t联系方式:%s\n",inf_stu[i].tel);
    }
    if (m==2)
    {
	    char s[20];
	    int i=0;
	    printf("请输入想要查询学生的电话:");
	    scanf("%s",s);
	    while(strcmp(inf_stu[i].tel,s)!=0&&i<n)
	        i++;
	    if(i==n)
	    {
	        printf("\t\t没有这个学生！\n");
	        return;
	    }
	    printf("\n\t\t您查询的学生信息如下:\n");
        printf("\t\t姓名:%s\n",inf_stu[i].name);
        printf("\t\t学院:%s\n",inf_stu[i].college);
        printf("\t\t年级:%s\n",inf_stu[i].grade);
        printf("\t\t专业:%s\n",inf_stu[i].sdept);
        printf("\t\t身份证号码:%s\n",inf_stu[i].sno);
        printf("\t\t联系方式:%s\n",inf_stu[i].tel);
    }
    if (m==3)
    {
	    char s[20];
	    int i=0;
	    printf("请输入想要查询学生的身份证号码：");
	    scanf("%s",s);
	    while(strcmp(inf_stu[i].sno,s)!=0&&i<n)
	        i++;
	    if(i==n)
	    {
	        printf("\t\t没有这个学生！\n");
	        return;
	    }
	    printf("\n\t\t您查询的学生信息如下:\n");
        printf("\t\t姓名:%s\n",inf_stu[i].name);
        printf("\t\t学院:%s\n",inf_stu[i].college);
        printf("\t\t年级:%s\n",inf_stu[i].grade);
        printf("\t\t专业:%s\n",inf_stu[i].sdept);
        printf("\t\t身份证号码:%s\n",inf_stu[i].sno);
        printf("\t\t联系方式:%s\n",inf_stu[i].tel);
    }    
}
*/

void student_information_all()
{
	information *inf1;
	printf("\n\t资料库中的员工信息列表\n");
	bound('_',40);
	inf1=inf_first;
	while(inf1)
	{
		bound('_',40);
		printf("姓名: %d\n",inf1->name);
		printf("学院: %s\n",inf1->college);
		printf("年级: %s\n",inf1->grade);
		printf("专业: %s\n",inf1->sdept);
		printf("身份证号码: %d\n",inf1->sno);
		printf("联系方式: %s\n",inf1->tel);
		bound('_',40);
		inf1=inf1->next;
	}
	printf("\n员工信息显示完毕,按任意键退出!\n");
	return;
}	

/*	int i;
	printf("*********************所有学生信息************************\n");
	printf("\t姓名     学院      年级    专业     身份证号码\t\t  联系方式\t");
	printf("*****************************************************\n");
	for(i=1;i<n+1;i++)
	{
		printf("\t%+6s%-10s%-6s%-10s%-15s%-15s%",inf_stu[i-1].name,\
			inf_stu[i-1].college,inf_stu[i-1].grade,inf_stu[i-1].sdept,\
			inf_stu[i-1].sno,inf_stu[i-1].tel);
	}
	printf("*****************************************************\n");
}
*/
//void student_healthy_unusually()存在风险学生
//void student_healthy_danger()健康异常学生
//void student_healthy_all()//学生健康情况

void menu_department()//部门选择菜单
{
    printf("\n               欢迎进入部门管理系统！                     \n");
    printf("*********************系统功能菜单*************************\n");
	printf("---------------------------------------------------------\n");
    printf("|                ___1:各学院健康统计___                  |\n");
    printf("|                ___2:学生健康情况___                    |\n");
    printf("|                ___3:学生信息查询___                    |\n");
    printf("|                ___4:学生信息删除___                    |\n");
	printf("|                ___5:学生信息修改___                    |\n");
	printf("|                ___6:教师授权系统___                    |\n");
    printf("|                ___0:退出管理系统___                    |\n");
    printf("---------------------------------------------------------\n");
	printf("*********************************************************\n\n");

    scanf("%d",&i);
	switch (i)//部门系统功能选择
	{
		case 1:
			system("cls");
			college_healthy_sum();//各学院健康统计
			break;
        case 2: 
	        system("cls");
	        student_healthy()//学生健康情况
	        break;
        case 3: 
	        system("cls");
			student_search();//学生信息查询
			break;
        case 4: 
	        system("cls");
			student_delete()//学生信息删除   
		 	break;
        case 5: 
	        system("cls");
			student_replace()//学生信息修改
			break;
        case 6: 
	        system("cls");
			teacher_admin()//教 师 授 权
			break;
        case 0:
	        printf("*********************感谢使用！**************************");
			break;//退出程序  退出管理系统

        default:
		printf("输入错误，请重新输入\n");
		break;	
	}
	return;
}

void menu_teacher()//教师管理员选择系统菜单
{
    printf("\n              欢迎进入教师管理员系统！                  \n\n");
	printf("*********************系统功能菜单************************\n");
	printf("---------------------------------------------------------\n");
	printf("|                ___1:学生信息导入___                   |\n");
	printf("|                ___2:学生健康情况___                   |\n");
	printf("|                ___3:学生信息查询___                   |\n");
	printf("|                ___4:学生信息删除___                   |\n");
	printf("|                ___5:学生信息修改___                   |\n");
	printf("|                ___6:学院健康统计___                   |\n");
	printf("|                ___7:存在风险学生___                   |\n");
	printf("|                ___8:健康异常学生___                   |\n");
	printf("|                ___9:所有学生信息___                   |\n");
    printf("|                ___0:退出管理系统___                   |\n");
	printf("---------------------------------------------------------\n");
	printf("*********************************************************\n\n");
	printf("\n  请选择您需要的操作(0-6):   ");

    scanf("%d",&i);
	switch (i)//部门系统功能选择
	{
		case 1:
			system("cls");
			student_input()//学生信息导入
			break;
        case 2: 
	        system("cls");
	        student_healthy()//学生健康情况
        break;
        case 3: 
        	system("cls");

			 if(gfirst)
			 {
				 printf("\n系统信息中无员工信息，请先添加员工信息!\n");
				 getch();
                 break;
			 }
            student_search();
		    getch();
		    break;
/*		student_search();//学生信息查询
		break;
		*/
        case 4: 
 	        system("cls");
	        if(gfirst)
					{
						printf("\n系统信息中无员工信息，请先添加员工信息！\n");
						getch();
						break;
					}
					student_delete()//学生信息删除   
	 				break;
        case 5: 
        	system("cls");
			if(gfirst)
			{
				printf("\n系统信息中无员工信息，请先添加员工信息！\n");
				getch();
				break;
			}
			student_replace();
			getch();
			break;
/*
		student_replace()//学生信息修改
		break;
		*/
		case 6: 
        	system("cls");
			college_healthy()//学院健康统计
		break;
		case 7: 
        	system("cls");
			student_healthy_unusually()//存在风险学生
		break;
		case 8: 
        	system("cls");
			student_healthy_danger()//健康异常学生
		break;

		case 9: 
        	system("cls");
			 if(gfirst)
			 {
				 printf("\n系统信息中无员工信息，请先添加员工信息!\n");
				 getch();
                 break;
			 }
            student_information_all();
		    getch();
		    break;


        /*
		student_information_all();//所有学生信息
		break;
*/
		case 0:
	        printf("*********************感谢使用！**************************");
			break;//退出程序  退出管理系统

	    default:
		    printf("输入错误，请重新输入\n");
			break;	
	}	
}

void menu_student()//学生菜单
{
    printf("\n            欢迎进入新型冠状病毒疫情系统！               \n");
    printf("*********************系统功能菜单************************\n");
    printf("|                ___1:个人信息查询___                   |\n");
    printf("|                ___2:个人信息修改___                   |\n");
    printf("|                ___3:每日健康打卡___                   |\n");
    printf("|                ___0:退出管理系统___                   |\n");
    printf("---------------------------------------------------------\n");
	printf("*********************************************************\n\n");

    scanf("%d",&i);
	switch (i)//学生功能选择
	{
    	case 1: 
	    	system("cls");
			student_search()//学生信息查询
			break;
        case 2: 
	        system("cls");
			student_replace()//学生信息修改
			break;
        case 3: 
	        system("cls");
			student_healthy_input()//学生健康情况_输入\
			即每日健康打卡
			break;

        case 0:
	        printf("*********************感谢使用！**************************");
			break;//退出程序  退出管理系统

        default:
			printf("输入错误，请重新输入\n");
			break;
	}
}

void system_department()//部门系统
{
	int i=1;
	while(i)
	{
		menu_department();
		return;
	}
}

void system_teacher()//教师管理员系统
{
	int i=1;
	while(i)
	{
		menu_teacher()
		return;
	}
}
void system_student()//学生系统
{
	int i=1;
	while(i)
	{	
		menu_student()    
		return;
	}
}

void system_menu()
{
    printf("*********************欢迎使用新型冠状病毒疫情系统*********************\n");
    printf("*************************请选择用户类型******************************\n");
    printf("*****************1=部门系统 2=教师管理员系统 3=学生系统****************\n");       
    printf("*****************************退出请按：0************************/****\n");       
    printf("                             请选择：                    \n");
    loop7:
    scanf("%d",&switch_num);
    switch(switch_num)
    {
    	case 1:
    	system_department();
    	break;
    	case 2:
		system_teacher();//教师管理员
		break;
		case 3:
	    system_student();
	    break;

	    case 0:
	    exit(0);
	    
		default:
	    printf("错误信息，请重新输入：");
	    goto loop7;
	}
}

int main()
{
	inf_first=inf_end=NULL;
	gsave=gfirst=0;
	system_menu()
}