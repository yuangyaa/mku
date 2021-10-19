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
}