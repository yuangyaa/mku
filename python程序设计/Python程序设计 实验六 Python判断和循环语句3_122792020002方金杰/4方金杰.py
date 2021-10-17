'''4.	从键盘输入三角形的三边长，
（ 1 ）判断这三边是否能够构成三角形；
（ 2 ）如果是等腰三角形，请打印输出是等腰三角形；
（ 3 ）如果是等边三角形，请打印输出是等边三角形；
'''
#判断三条边是否三角形
a=int(input("请输入a的值"))
b=int(input("请输入b的值"))
c=int(input("请输入c的值"))
if a>0 and b>0 and c>0 and a+b>c and b+c>a and c+a>b:
	print('三边可以构成三角形')
	if a==b or a==c or b==c:
		print("三边构成的三角形是等腰三角形")
		if a==b and a==c and b==c:
			print("三边构成的三角形是等边三角形")