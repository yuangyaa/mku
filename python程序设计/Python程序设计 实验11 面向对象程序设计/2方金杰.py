'''
2.	设计一个用来描述汽车的类，使用类的变量来表示汽车的车主姓名、当前的速率和当前方向盘的转向角度，使用类的方法来表示改变汽车的速率和停车两个操作。
程序运行结果如下：
	当速率等于0，显示“***汽车已停车！***”；
	当速率大于150，显示“***行驶超速，请限速在150km/h以下！***”；
	当速率大等于0小等于150，显示“***汽车正常行驶中！***”；
'''
d=input("请输入此时的车速：")
d=float(d)
if d<=0:
    print("***汽车已停车！***")
elif d>150:
    print("***行驶超速，请限速在150km/h以下！***")
else:
    class Car:
        a_="xiaowang"
        b=("{}km/h".format(d))
        c="30.0度"
        def run(self):
            print("***汽车正常行驶中！***")
    x=Car()
    x.run()
    y=Car()
    y.run()
    z=Car()
    z.run()
    print("姓名：",x.a_)
    print("速率：",y.b)
    print("方向盘角度：",z.c)