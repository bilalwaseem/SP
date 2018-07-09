def make_star(t_str0):
	t_str=list(t_str0)
	str_t=t_str[0]
	
	i=1
	while i < (len(t_str)):
		if t_str[i] == str_t:
			t_str[i]="*"
		i+=1
	return "".join(t_str)

if __name__=="__main__":
	t_str=raw_input("enter the string ")
	new_str=make_star(t_str)
	print "new string is {0}".format(new_str)
