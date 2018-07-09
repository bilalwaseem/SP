def remove_adjacent(name):
	i=1
	while i < (len(name)-1):
		if name[i-1] == name[i] or  name[i+1]== name[i]:
			del name[i]
			i-=1
		i+=1
		
	return name

if __name__=="__main__":
	TempList=[1,2,2,2,2,3,4,5,5]
	print TempList
	print remove_adjacent(TempList)
