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
	printf("|                ___9:所有学生信息___                   |\n");
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
 
		void student_delete()//学生信息删除   
		 {}
            case 5: system("cls");
                    display(b,N);break;//调用输出信息模块  学生信息修改

		void student_replace()//学生信息修改
		{}

            case 6: system("cls");
                    _search(b,N);break;//调用查找模块  学院健康统计
      
        void college_healthy()//学院健康统计
        {}
      
            case 7: system("cls");
                    _search(b,N);break;//调用查找模块  存在风险学生

        void student_healthy_unusually()//存在风险学生
        {}

            case 8: system("cls");
                    _search(b,N);break;//调用查找模块  健康异常学生
        void student_healthy_danger()//健康异常学生
        {}

            case 9: system("cls");
                    _search(b,N);break;//调用查找模块  所有学生信息
        void student_information_all()//所有学生信息
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