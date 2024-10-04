import numpy as np
#创建一个阵列
a=np.array([1,2,3,4,5],dtype='int32')
#创建一个列表
b=[1,2,3,4,5]
#批量运算
print(a*2)
#print(a+2)
#print(a-2)
print(a/2)#进行批量除法运算的时候，可能会改变数据类型