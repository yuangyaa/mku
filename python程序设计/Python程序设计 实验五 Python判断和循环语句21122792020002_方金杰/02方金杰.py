'''2.	编写程序，输出下列图形
      -----*
	  ----* *
	  ---* * *
	  --* * * *
	  -* * * * *
'''
for j in range(1,6):
    for  i in range (1,7-j):
    	print("-",end="")
    for y in range(1,1+j):
    	print("* ",end="")
    print("")