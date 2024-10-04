#创建一个二维阵列
import numpy as np
b= np.array([
[1,2,3],
[4,5,6],
[7,8,9],
[10,11,12]
])
#求总和
print( b.sum())
#求每一列的和
# print(b.sum(axis=θ))
#求每一行的和
print(b.sum(axis=1))