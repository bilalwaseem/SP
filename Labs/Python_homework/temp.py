from bs4 import BeautifulSoup
import requests

#sauce = urllib.requests.get('https://docs.python.org/3/tutorial/').read()
sauce = requests.get('https://docs.python.org/3/tutorial/')
soup= BeautifulSoup(sauce.content,'html.parser')

print(soup.title)

a= (soup.find_all('link'))

soup.get_text()

print(soup.title.name)

print(soup.title.string)
print(soup.title.text) ..right..

print soup.get_text()

for alpha in soup.find_all('p'):
	print alpha.text

for alpha in soup.find_all('a'):
	print alpha.get('href')


nav = soup.nav

first_para=soup.p

body= soup.body

soup.find('table',name="ali")

soup.find_all('div',class_='body')
