'''1.
根据手动输入的英文字符，猜出对应想要输入的具体星期，例如：
a)	当输入“F”，打印输出“Friday”
b)	当输入“S”，则显示“please input second letter:”；若第二个字符输入“u”则打印输出“Sunday”
c)	若输入的字符和星期不匹配，则打印输出“data error”
'''
a=input("请输入英文字符:")
if a=='F':
	print("Friday")
if a=='M':
	print("Monday")
if a=='T':
	print("please input secend letter")
	b=input("请输入第二个英文字符:")
	if b=='h':
		print("Thuesday")
	elif b=='u':
		print("Tuesday")
if a=='W':
	print("Wednesday")
if a=='S':
	print("please input secend letter")
	b=input("请输入第二个英文字符:")
	if b=='u':
		print("Sunday")	
	elif b=='a':
		print('Saturday')
	else:
		print('data error')