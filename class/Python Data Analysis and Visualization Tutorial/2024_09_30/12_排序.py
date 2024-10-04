import numpy as np
#创建一个阵列
a=np.array([5,2,7,4,9],dtype='int32')
#直接排序
a.sort()
print(a)
#间接排序
b = a.argsort()
print(a[b])