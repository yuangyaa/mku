'''
编写用户登陆系统
1.系统里面有多个用户，请把以下用户的信息保存在列表里面
    users = ['admin','root']
    passwd =['123','456']
2.用户登陆(判断用户登陆是否成功）
    1).判断用户是否存在
    2).如果存在
        1).判断用户密码是否正确
        		如果正确，登陆成功，退出循环
        		如果密码不正确，重新登陆（打印输出”当前还剩x次机会密码输入错误，请重新输入”），总共有三次机会登陆
    3).如果用户不存在
       重新登陆（打印输出”当前还剩x次机会。用户名输入错误，请重新输入”），总共有三次机会

'''
users = ['root','westos']
passwd =['123','456']
n=3
for a in range(0,4):
	b = input("请输入用户名:")
	c = input("请输入密码:")
	if a<=3:
		n=n-1
		if b in users:
			if c in passwd:
				print("登陆成功")
				break
			else:
				print("当前还剩",n,"次机会。密码输入错误，请重新输入")
		else:
			print("当前还剩",n,"次机会。用户名输入错误，请重新输入")
#else a not in users:
#	print("重新登陆（当前还剩",a-1,"次机会。用户名输入错误，请重新输入")