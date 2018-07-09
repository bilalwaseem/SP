

mylist = [1,2,3,[4,5], "I am", "25", 3.4, 5.7,65]

dic={}
i=0

a=type(9)

print a

while i < len(mylist):
	if type(mylist[i]) not in dic.keys() :
		dic[type(mylist[i])]=[]
		dic[type(mylist[i])].append(mylist[i])
	else:
		dic[type(mylist[i])].append(mylist[i])
	
	i+=1
		
print dic
