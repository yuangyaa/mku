# #获取用户2输入的信息并赋值
player1 =int(input("请用户1输入：0(剪刀) 1(石头) 2(布):"))#获取用户1输入的信息并赋值
player2 =int(input("请用户2输入：0(剪刀) 1(石头) 2(布):"))#获取用户2输入的信息并赋值
if player1<0 or player1>2 or player2<0 or player2>2: #输入了游戏规则以外的数字
    print("请遵守游戏规则") #输出“请遵守游戏规则”
else: #输入正确
    if ((player1==0) and (player2==2)) or ((player1==1) and (player2==0)) or ((player1==2) and (player2==1)):
#用户1所有能获胜的判断条件
        print("用户1获得胜利") #输出“用户1获得胜利”
    elif player1==player2: #用户1输入与用户2相同时
        print("平局，再来一局") #输出“平局，再来一局”
    else: #用户2获胜
        print("用户2获得胜利") #输出“用户2获得胜利”