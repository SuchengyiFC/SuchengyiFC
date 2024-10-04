import numpy as np
#创建一个numpy数组

a = np.array((1, 2, 3), dtype='int32')

print(a)
# 1.要求所有元素数据类型一致，数据类型在创建之初就要定义
# 2.正因为数据类型完全一致，且初始就已经定义，因此增加了运算效率