'''2.	学生成绩可分为百分制和五级制，将手动输入的百分制成绩score，
转换成相应的五级制成绩后输出。
要求：分数在以下情况都不满足输出“输入数据无意义”'''
score=int(input("请输入学生的成绩:"))
if 90<=score<=100:
	print("优")
elif 80<=score<90:
	print("良")
elif 70<=score<80:
	print("中")
elif 60<=score<70:
    print("及格")
elif 0<=score<60:
    print("不及格")
else:
	print('输入数据无意义')