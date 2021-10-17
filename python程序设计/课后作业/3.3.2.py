for cock in range(0,20+1): #鸡翁范围在0到20之间
    for hen in range(0,33+1): #鸡母范围在0到33之间
        for biddy in range(3,99+1): #鸡雏范围在3到99之间
            if (5*cock+3*hen+biddy/3)==100: #判断钱数是否等于100
                if (cock+hen+biddy)==100: #判断购买的鸡数是否等于100
                    if biddy%3==0: #判断鸡雏数是否能被3整除
                        print ("鸡翁:",cock,"鸡母:",hen,"鸡雏:",biddy) #输出