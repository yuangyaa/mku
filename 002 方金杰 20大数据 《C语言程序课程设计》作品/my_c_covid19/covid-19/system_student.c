case 3:
    system_student();

void system_student()//学生
{
	menu_student()

    
		return;
}
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