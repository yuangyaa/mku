'''2.	输出2~100之间的素数(一个数除了1和它本身没有别的约数,这个数叫做素数(也叫质数))'''
for i in range(2,101):
    K=0
    for j in range(2,i-1):
        if i%j==0:
            K=1
            break
    if K==0:
        print(i)