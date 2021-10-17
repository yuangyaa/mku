'''4.	开发敏感词语过滤程序，提示用户从键盘输入输入内容，
如果用户输入的内容中包含特殊的字符则将内容替换为***：
特殊字符包括：“捣蛋”、“哈哈哈”、“天气”
'''
a=input("请输入内容：")
b='捣蛋'
c='哈哈哈'
d='天气'
if a==b:
	a=b.replace("捣蛋",'***')
	print(a)
elif a==c:
	a=c.replace("哈哈哈",'***')
	print(a)
elif a==d:
	a=c.replace("天气",'***')
	print(a)
else:
	print(a)