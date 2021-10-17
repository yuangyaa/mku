'''
使用列表完成后台管理员管理前台会员信息系统:
1. 后台管理员只有一个用户: admin, 密码: admin
2. 当管理员登陆成功后， 可以管理前台会员信息.
3. 会员信息管理包含:
      添加会员信息
      删除会员信息
      查看会员信息
      退出
- 添加用户:
    1). 判断用户是否存在?
    2).  如果存在， 显示“用户已存在，请勿再次添加”；
    3).  如果不存在，添加用户名和密码分别到列表中;
- 删除用户
    1). 判断用户名是否存在
    2). 如果存在，删除；
    3). 如果不存在， 显示“该用户不存在，请重新检查”
'''
admin_users=['admin']
admin_passwd=["admin"]
users=[]		
passwds=[]		
a=input("请输入用户名：")
b=input("请输入密码：")
if a in admin_users and b in admin_passwd:
	print("登录成功")
	print("添加会员信息(0)\n删除会员信息(1)\n查看用户信息(2)\n退出(3)")
	d=int(input("请输入你的选择："))
	if d==0:
		user=input("请输入添加的用户名:")
		passwd=input("请输入添加的密码：")
		if user in users:
			print("用户已存在，请勿再次添加")
		else:
			users.append(user)
			passwds.append(passwd)
			print("添加成功")
	elif d==1:
		user=input("请输入删除的用户名")
		if user in users:
			users.remove(user)
			print("删除会员信息成功")
		else:
			print("该用户不存在，请重新检查")
	elif d==2:
		print(users,passwds)
	elif d==3:
		print("再见！")
	else:
		print("请输入正确选择！")