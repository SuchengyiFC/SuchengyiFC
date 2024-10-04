import json

# 创建一个字典
xiao_liu = {
    'age': 18,
    'sex': '男',  # 注意这里的引号应该是英文的
    'num': '001'  # 注意这里的引号也应该是闭合的，且为英文的
}

# 打开一个文件以写入
f = open('C:\\Users\\kMcc\\Desktop\\test.json', 'w', encoding='utf-8')  # 注意这里的括号和引号也应该是英文的

# 存储为JSON文件
json.dump(xiao_liu, f)

# 关闭文件
f.close()