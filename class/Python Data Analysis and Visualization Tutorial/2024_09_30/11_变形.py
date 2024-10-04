#创建一个二维阵列
import numpy as np
b= np.array([
[1,2,3],
[4,5,6],
[7,8,9],
[10,11,12]
])
#一维化展开
#print(b.ravel())
#变形，注意，变形后元素的数量不能改变
#b.shape=（3，4）#变成3行4列
b.shape=(2,6)#变成2行6列
print(b)