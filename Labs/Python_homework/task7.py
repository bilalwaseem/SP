from bs4 import BeautifulSoup
import urllib

sauce= open('/root/Downloads/homework/babynames/baby1990.html','read')

soup= BeautifulSoup(sauce,'lxml')

table_list=soup.find_all('table')

table=(table_list[2])

for i in table.find_all('tr'):
	temp=-1
	for j in i.find_all('td'):
		temp+=1
		if  temp == 0:
			continue
		print j.text,
	print ""
		
		
