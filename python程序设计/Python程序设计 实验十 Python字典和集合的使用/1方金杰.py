'''
集合练习
手动输入10个整数，对于其中重复的数字，
只保留一个，把其余相同的数字去掉，然后再把这些数从小到大排序，
请你完成“去重”与排序工作
'''
a=input("请输入数字：").split()
for i in a:
	while a.count(i)>1:
		a.remove(i)
		pass
print(a)