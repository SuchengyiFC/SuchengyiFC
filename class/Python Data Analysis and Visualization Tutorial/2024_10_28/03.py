import time

from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By

wd = webdriver.Edge(service=Service('C:\\Users\\KMCC\\Downloads\\edgedriver_win64\\msedgedriver.exe'))
wd.get('https://github.com/SuchengyiFC/SuchengyiFC/blob/main/class/Python%20Data%20Analysis%20and%20Visualization%20Tutorial/2024_09_09/100%E4%BB%A5%E5%86%85%E7%B4%A0%E6%95%B0.py')
hunko = wd.find_element(By.CLASS_NAME,'Box-sc-g0xbh4-0 dGXHv')
print(hunko)
time.sleep(8)
wd.close()