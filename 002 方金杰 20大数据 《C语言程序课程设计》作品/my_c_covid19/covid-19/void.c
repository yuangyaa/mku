int student_input(information inf_stu[],int n)
{
    int i=0;
    char sign;
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
    printf("*****************请选择查询方式************************\n");
    printf("|                ___1:按姓名查询___                   |\n");
    printf("|                ___2:按电话查询___                   |\n");
    printf("|                ___3:按身份证号码查询___              |\n");
    printf("|                ___4:返回上一级___                   |\n");
    printf("                 请选择:                   \n");
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

void student_information_all(information inf_stu[],int n)
{
	int i;
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
		student_information_all();//所有学生信息
		break;

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
    	case 1: system("cls");
		student_search()//学生信息查询
		break;
        case 2: system("cls");
		student_replace()//学生信息修改
		break;
        case 3: system("cls");
		student_healthy_input()//学生健康情况_输入\
		即每日健康打卡
		break;

        case 0:printf("*********************感谢使用！**************************");
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