'''
1)	创建一个空列表，命名为names，往里面添加 LiJieMin、LiDaLong、KeHongTao、JiaXin、JingJing和YiFei元素。
2)	往(1)中的names列表里YiFei前面插入一个WangHanJie。
3)	把names列表中JiaXin的名字改成中文“佳欣”
4)	往names列表中LiDaLong后面插入一个子列表["XinMei","ChenLin"]。
5)	返回names列表中JingJing的索引值（下标）。
6)	创建新列表[1,2,3,4,2,5,6,2,]，合并到names列表中。
7)	取出names列表中索引4-7的元素。
8)	取出names列表中索引2-10的元素，步长为2。
9)	取出names列表中最后3个元素。
10)	循环names列表，打印每个元素的索引值和元素。
11)	循环names列表，打印每个元素的索引值和元素，当索引值为偶数时，把对应的元素改成-1。
'''
names=[]
names.append("LiJieMin")
names.append("LiDaLong")
names.append("KeHongTao")
names.append("JiaXin")
names.append("JingJing")
names.append("YiFei")
names.insert(5,"WangHanJie")
if "JiaXin" in names:
	a=names.index("JiaXin")
	names[a]="佳欣"
names.insert(1,["XinMei","ChenLin"])
names.index("JingJing")
b=[1,2,3,4,2,5,6,2]
names=names+b
print(names[4:7])
print(names[2:10:2])
a=len(names)
print(names[a-3:a:1])
i=0
for name in names:
	print("索引为{}的元素是:{}".format(i,name))
	i+=1
for c in names:
	if names.index(c)%2==0:
		b=names.index(c)
	names[b]="-1"
print(names)