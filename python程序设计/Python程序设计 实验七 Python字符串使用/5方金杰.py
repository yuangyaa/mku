'''循环提示用户输入：用户名、密码、邮箱
（要求用户输入的长度不能超过20个字符，如果超过则只有前20个字符有效），
如果用户输入q或者Q表示当前用户信息输入完毕后不再继续输入，
将用户的内容一表格形式打印'''
d=""
i=1
while i>0:
    user_name = input("请输入用户名（1-20个字符）：")
    if 0<len(user_name) or 20>len(user_name):
            user_name=user_name[0:20]
    password = input("请输入密码（下划线开头、后面由数字和字母共同组成，8-16个字符）：")
    if 0<len(password) or 20>len(password):
            password=password[0:20]
    email = input("请输入邮箱：")
    if 0<len(email) or 20>len(email):
            email=email[0:20]
    d = ('%s\n%s,%s,%s' % (d, user_name, password, email))
    if user_name.count("q") > 0 or user_name.count("Q") > 0 or password.count("q") > 0 \
            or password.count("Q") > 0 or email.count("q") > 0 or email.count("Q") > 0:
            print(d)
            break