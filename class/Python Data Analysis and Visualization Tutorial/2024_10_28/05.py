import time

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

wd = webdriver.Edge(service=Service('C:\\Users\\KMCC\\Downloads\\edgedriver_win64\\msedgedriver.exe'))
wd.get('https://github.com/dashboard')
hunko = wd.find_elements(By.CLASS_NAME,'logged-in env-production page-responsive full-width')
print(hunko)
time.sleep(8)
wd.close()