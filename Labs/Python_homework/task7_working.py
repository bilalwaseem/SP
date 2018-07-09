from bs4 import BeautifulSoup
import urllib


def parse_local_web_page(path):
	sauce= open(path,'r')

	soup= BeautifulSoup(sauce,'lxml')

	table=soup.find('table',summary="Popularity for top 1000")

	

	male=[]
	
	female=[]
	for i in table.find_all('tr'):
		temp=-1
		for j in i.find_all('td'):
			temp+=1
			if  temp == 0:
				continue
			if  temp == 1:
				male.append(j.text)
			if  temp == 2:
				female.append(j.text)
	return male,female

def main():
	#t_str=raw_input("please enetr the path of the file ")
	t_str= '/root/Downloads/homework/babynames/baby1990.html'
	dou1,dou2=parse_local_web_page(t_str)
	print dou1
	
	
if __name__=="__main__":
	main()
