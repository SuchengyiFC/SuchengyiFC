class Student:
    # 构造方法，用于创建一个此类的对象
    def __init__(self, study_num, age, sex):
        self.study_num = study_num
        self.age = age
        self.sex = sex

    # 输出自己的学号，self是自己的意思
    def print_num(self):
        print(self.study_num)

    # 定义第二个方法，这个方法用于表达自己的内心感受
    def print_happy(self):
        print('啊，这个早八我上不来咯，老师傻逼，非要上早八！')
    # 创建学号为001的学生，并让他告诉我他的学号是多少


xiao_ming = Student(study_num='001', age=18, sex='武装直升机')
print(xiao_ming.age)
print(xiao_ming.sex)
# 创建一个类，需要有以下几个部分：
# 属性（可以有很多个）
# 方法（可以有很多个）
# 构造方法（用于创建此类的实例，只能有一个）
