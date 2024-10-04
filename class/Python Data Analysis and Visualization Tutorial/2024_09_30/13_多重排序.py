#根据成绩，对学生进行排名
import numpy as np
name=np.array(['A','B','C','D','E'])
age=np.array([18,30,65,20,10])
score=np.array([66,77,22,13,80])
#多重间接排序
b=np.lexsort((name,age,score))
print(name[b])
print(age[b])
print(score[b])