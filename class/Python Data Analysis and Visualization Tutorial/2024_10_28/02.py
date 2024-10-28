import time

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
wd = webdriver.Edge(service=Service('C:\\Users\\KMCC\\Downloads\\edgedriver_win64\\msedgedriver.exe'))
wd.get('https://github.com/SuchengyiFC')
with open('gihub.html', 'w', encoding='UTF-8') as w:
    w.write(wd.page_source)
# print(wd.page_source)
time.sleep(8)
wd.close()