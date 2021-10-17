'''
一个笼子里有鸡和兔，现在只知道里面一共有 40 个头，100 只脚，鸡兔各有多少只
'''
def animal(head,left):
    y=(left-2*head)/2
    rabbit=y
    hen=head-y
    print("鸡的数量为：",hen,"兔子的数量为：",rabbit)
a=int(input("请输入头的数量："))
b=int(input("请输入脚的数量："))
animal(a,b)



