
typedef struct student_information//个人信息查询
    {
       char name[20];//姓名 
       char college[20];//学院 
       char grade[20];//年级
       char sdept[20];//专业        
       char sno[20];//身份证号码 
       char tel[20];//联系方式 
    }information;
    information[20]={
    	{"张三","计算机信息学院","2020","计算机科学与技术",\
    	"350303123123123123","15612312312"},\
{"李四""计算机信息学院","2020","网络工程",\
"350321131313131313","13313131331"}
}

int main()
{
    system("color f0");
    printf("*********************欢迎使用新型冠状病毒疫情系统*********************\n");
    printf("    *********************请选择用户类型*********************\n");
    printf("    *********************1=部门 2=教职工 3=学生*********************\n");       
    printf("                             请选择：                    \n");
    loop7:
    scanf("%d",&switch_num);
    switch(switch_num)
    {
    case 1:
        system_department();//部门系统

void system_department()//部门系统
{
    int i=1;
    while(i)
	{
        menu_department();//部门选择菜单

	    void menu_department()//部门选择菜单
	    {
	    printf("\n               欢迎进入部门管理系统！                     \n");
	    printf("*********************系统功能菜单************************\n");
		printf("---------------------------------------------------------\n");
	    printf("|                ___1:各学院健康统计___                  |\n");
	    printf("|                ___2:学生健康情况___                    |\n");
	    printf("|                ___3:学生信息查询___                    |\n");
	    printf("|                ___4:学生信息删除___                    |\n");
		printf("|                ___5:学生信息修改___                    |\n");
		printf("|                ___6:教 师 授 权 ___                    |\n");
	    printf("|                ___0:退出管理系统___                    |\n");
	    printf("---------------------------------------------------------\n");
		printf("*********************************************************\n\n");

        scanf("%d",&i);
		switch (i)//部门系统功能选择
		{
	    case 1: system("cls");
	        	N=input(b,N);break;//调用导入模块  各学院健康统计

		void college_healthy_sum()//各学院健康统计
		{}

            case 2: system("cls");
                    display(b,N);break;//调用输出信息模块  学生健康情况

		void student_healthy()//学生健康情况
		{}

            case 3: system("cls");
                    _search(b,N);break;//调用查找模块  学生信息查询

		void student_search()//学生信息查询
		{}

            case 4: system("cls");
                    _sort(b,N);break;//调用排序模块  学生信息删除
 
		 void student_delete()//学生信息删除   
		 {}
            case 5: system("cls");
                    display(b,N);break;//调用输出信息模块  学生信息修改

		void student_replace()//学生信息修改
		{}

            case 6: system("cls");
                    _search(b,N);break;//调用查找模块  教 师 授 权 

		void teacher_admin()//教 师 授 权
		{}

            case 0:printf("*********************感谢使用！**************************");
			break;//退出程序  退出管理系统


            default:
			printf("输入错误，请重新输入\n");
			break;
		
	}
		return;
	}

        break;
case 2:
	system_teacher();//教师管理员
	break;
case 3:
    system_student();
    break;
default:
    printf("错误信息，请重新输入：");
    goto loop7;
}
}case 2:
    system_teacher();//教师管理员

void system_teacher()//教师管理员
{
    menu_teacher()

    void menu_teacher()//教师管理员选择系统
{
    printf("\n              欢迎进入教师管理员系统！                      \n\n");
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
//  printf("|                ___9:修改登入密码___                   |\n");
    printf("|                ___0:退出管理系统___                   |\n");
    printf("---------------------------------------------------------\n");
    printf("*********************************************************\n\n");

        scanf("%d",&i);
        switch (i)//教师管理员功能选择
        {
        case 1: system("cls");
                N=input(b,N);break;//调用导入模块  学生信息导入

        void student_input()//学生信息导入（学生信息查询输入）
        {}

            case 2: system("cls");
                    display(b,N);break;//调用输出信息模块  学生健康情况

        void student_healthy()//学生健康情况
        {}

            case 3: system("cls");
                    _search(b,N);break;//调用查找模块  学生信息查询

        void student_search()//学生信息查询
        {}

            case 4: system("cls");
                    _sort(b,N);break;//调用排序模块  学生信息删除
 
         void delete()//学生信息删除   
         {}
            case 5: system("cls");
                    display(b,N);break;//调用输出信息模块  学生信息修改

        void replace()//学生信息修改
        {}

            case 6: system("cls");
                    _search(b,N);break;//调用查找模块  学院健康统计
      
        void college_healthy()
        {}
      
            case 7: system("cls");
                    _search(b,N);break;//调用查找模块  存在风险学生

        void student_healthy_unusually()
        {}

            case 8: system("cls");
                    _search(b,N);break;//调用查找模块  健康异常学生
        void student_healthy_danger()
        {}

            case 0:printf("*********************感谢使用！**************************");
            break;//退出程序  退出管理系统


            default:
            printf("输入错误，请重新输入\n");
            break;
        
        }
        return;
    }

}
case 2:
    system_teacher();//教师管理员

void system_teacher()//教师管理员
{
    menu_teacher()

    void menu_teacher()//教师管理员选择系统
{
    printf("\n              欢迎进入教师管理员系统！                      \n\n");
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
//  printf("|                ___9:修改登入密码___                   |\n");
    printf("|                ___0:退出管理系统___                   |\n");
    printf("---------------------------------------------------------\n");
    printf("*********************************************************\n\n");

        scanf("%d",&i);
        switch (i)//教师管理员功能选择
        {
        case 1: system("cls");
                N=input(b,N);break;//调用导入模块  学生信息导入

        void student_input()//学生信息导入（学生信息输入）
        {}

            case 2: system("cls");
                    display(b,N);break;//调用输出信息模块  学生健康情况

        void student_healthy()//学生健康情况
        {}

            case 3: system("cls");
                    _search(b,N);break;//调用查找模块  学生信息查询

        void student_search()//学生信息查询
        {}

            case 4: system("cls");
                    _sort(b,N);break;//调用排序模块  学生信息删除
 
         void delete()//学生信息删除   
         {}
            case 5: system("cls");
                    display(b,N);break;//调用输出信息模块  学生信息修改

        void replace()//学生信息修改
        {}

            case 6: system("cls");
                    _search(b,N);break;//调用查找模块  学院健康统计
      
        void college_healthy()
        {}
      
            case 7: system("cls");
                    _search(b,N);break;//调用查找模块  存在风险学生

        void student_healthy_unusually()
        {}

            case 8: system("cls");
                    _search(b,N);break;//调用查找模块  健康异常学生
        void student_healthy_danger()
        {}

            case 0:printf("*********************感谢使用！**************************");
            break;//退出程序  退出管理系统


            default:
            printf("输入错误，请重新输入\n");
            break;
        
        }
        return;
    }

}

case 3:
    system_student();

void system_student()//学生
{
    menu_student()

    void menu_student()//学生
{
    printf("\n            欢迎进入新型冠状病毒疫情系统！                     \n");
    printf("*********************系统功能菜单************************\n");
    printf("|                ___1:个人信息查询___                   |\n");
    printf("|                ___2:个人信息修改___                   |\n");
    printf("|                ___3:每日健康打卡___                   |\n");
//    printf("|                ___4:核酸检测信息___                   |\n");
    printf("|                ___0:退出管理系统___                   |\n");
    printf("---------------------------------------------------------\n");
    printf("*********************************************************\n\n");
}

        scanf("%d",&i);
        switch (i)//学生功能选择
        {
        case 1: system("cls");
                N=input(b,N);break;//调用导入模块  学生信息查询

        void student_search()//学生信息查询
        {}

            case 2: system("cls");
                    display(b,N);break;//调用输出信息模块  学生信息修改

        void student_replace()//学生信息修改
        {}

            case 3: system("cls");
                    display(b,N);break;//调用输出信息模块  学生健康情况

        void student_healthy()//学生健康情况_输入
        {}

            case 0:printf("*********************感谢使用！**************************");
            break;//退出程序  退出管理系统


            default:
            printf("输入错误，请重新输入\n");
            break;
        
    }
        return;
    }


int student_input(information inf_stu[],int n)
{
    int i=0
    char sign
    while(sign!='n'&&sign!='N')
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
int student_delete(information inf_stu[],int n)
{
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
void student_replace(information inf_stu[],int n)
{
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
void student_search(information inf_stu[],int n)
{
    int m;
}