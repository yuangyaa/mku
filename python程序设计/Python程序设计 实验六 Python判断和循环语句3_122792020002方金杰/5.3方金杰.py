'''  1
    212
   32123
  4321234
 543212345
65432123456
'''
for i in range(0,6):
	for j in range(1,7-i):
		print(" ",end="")
	for y in range(1+i,0,-1):
		print(y,end="")
	for b in range (2,2+i):
		print(b,end="")
	print("")
