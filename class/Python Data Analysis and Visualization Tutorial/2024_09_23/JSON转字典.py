import json

# 创建一个字典
xiao_liu = {
    'age': 18,
    'sex': '男',
    'num': '001'
}

# 转化为JSON字符串
xiao_liu_json = json.dumps(xiao_liu)

# 注意：此时xiao_liu_json是字符串，不能直接通过索引访问其内容
# print(xiao_liu_json['age'])  # 这将引发TypeError

# 打印JSON字符串，仅作展示
print("JSON字符串:", xiao_liu_json)

# 转化回字典
xiao_liu = json.loads(xiao_liu_json)

# 现在可以访问字典中的值了
print("年龄:", xiao_liu['age'])