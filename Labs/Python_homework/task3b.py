def make_star(t_str0,ch):
	t_str=list(t_str0)
	str_t=ch
	
	i=0
	while i< (len(t_str)):
		if t_str[i]==ch:
			break
		i+=1
	i+=1
	
	while i < (len(t_str)):
		if t_str[i] == str_t:
			t_str[i]="*"
		i+=1
	
	return "".join(t_str)

if __name__=="__main__":
	t_str=raw_input("enter the string ")
	t_str2=raw_input("enter the string to be altetred ")
	new_str=make_star(t_str,t_str2)
	print "new string is {0}".format(new_str)
