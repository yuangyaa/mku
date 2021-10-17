#1.	编程输出以下9*9口诀表
for j in range(1,10):
    for  i in range (1,j+1):
    	result=i*j
    	if i<j:
    	    print(i,"*",j,"=",result,"",end="")
    	else:
    		print(i,"*",j,"=",result,"")