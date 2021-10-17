'''
编写一个简易计算器，要求根据输入的数字和四则运算符号，计算运算结果并输出。
'''
operator_list=['+','-','*','/']
numeber_1=float(input("请输入第一个操作数："))
operator=input("请输入运算符：")
numeber_2=float(input("请输入第二个操作数："))
if operator not in operator_list:
    print("输入的运算符有误，请输入四则运算符！")
else:
    if operator=="+":
        result=numeber_1+numeber_2
    elif operator=="-":
        result=numeber_1-numeber_2
    elif operator=="*":
        result=numeber_1*numeber_2
    elif operator=="/":
        result=numeber_1/numeber_2
    print(numeber_1,operator,numeber_2,'=',result)
