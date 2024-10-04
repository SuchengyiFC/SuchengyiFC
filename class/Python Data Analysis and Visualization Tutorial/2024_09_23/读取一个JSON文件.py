import json

# 打开一个文件以读取
f = open('c:\\users\\KMcc\\Desktop\\test.json', 'r', encoding='utf-8')  # 注意逗号应该在引号外

# 转化为字典
xiao_liu = json.load(f)

# 读取文件（实际上是从字典中读取）
print(xiao_liu['age'])

# 关闭文件
f.close()  # 注意括号是英文的圆括号