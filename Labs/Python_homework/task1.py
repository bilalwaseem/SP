def match_words(list_string):
	a=0;
	for i in list_string:
		if len(i) >= 2 and i[0] == i[len(i)-1]:
			a+=1
	return a
	
if __name__=="__main__":
	
	list_string=['ali','a','jibran','pip','aoa']
	
	ans=match_words(list_string)
	print("ans is {0}").format(ans)


