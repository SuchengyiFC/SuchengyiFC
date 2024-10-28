import time

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
wd = webdriver.Edge(service=Service('C:\\Users\\KMCC\\Downloads\\edgedriver_win64\\msedgedriver.exe'))
wd.get('https://github.com/SuchengyiFC')
time.sleep(8)
wd.close()