'''3.	 设定年龄和性别变量(age和sex)，如果年龄够7岁，或者年龄够5岁并且性别是’男’，就打印输出”可以搬动桌子”'''
age=int(input("请输入年龄："))
sex=input('请输入性别：')
if age>=7 :
	print("可以搬动桌子")
elif age>=5 and sex=="男":
	print("可以搬动桌子")