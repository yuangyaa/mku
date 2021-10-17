'''
	使用二维列表制作表格，要求每位用户是列表中的一个元素
循环提示用户输入：用户名、密码、邮箱（要求用户输入的长度不能超过20个字符，如果超过则只有前20个字符有效），
如果用户输入q或者Q表示当前用户信息输入完毕后不再继续输入，将用户的内容一表格形式打印
'''
i=1
a_list=[]
b_list=[]
while i<3:
	a=input("请你输入你的名字:")
	b=input("请你输入你的密码:")
	c=input("请你输入你的邮箱:")
	if 20<len(a) or 20<len(b) or 20<len(c) :	
		a=a[0:20]
		b=b[0:20]
		c=c[0:20]
	b_list = [a, b, c]
	a_list.append(b_list)
	if a.count("q")>0 or a.count("Q")>0 or b.count("q")>0 or b.count("Q")>0 or c.count("q")>0 or c.count("Q")>0:
		for i in a_list:
			print(i)
		break