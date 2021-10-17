'''1.	输出1~100之间能被3整除的前5个数'''
J=1
for i in range(1,101):
    if i%3==0:
        if J<6:
            print(i)
            J=J+1
            print("")