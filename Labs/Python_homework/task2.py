def both_ends(t_str):
	return t_str[:2]+t_str[len(t_str)-2:]

if __name__=="__main__":
	t_str=raw_input("enter the string : ")
	new_str=both_ends(t_str)
	print "new string is {0}".format(new_str)
