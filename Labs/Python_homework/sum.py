def sum(StrList):
	temp=""
	for i in StrList:
		temp=temp+i
	return temp
	
if __name__=="__main__":
	str1=sum(["hello", "world"])
	print str1
