class Student:
    # 这是一个类属性，不随着实例的变化而变化
    num = 0

    # 构造方法，用于创建一个此类的对象，每创建一个实例，num就+1
    def __init__(self, study_num, age, sex):
        self.study_num = study_num
        self.age = age
        self.sex = sex
        Student.num += 1

        # 输出自己的学号，seLf是自己的意思
        def print_num(self):
            print(self.study_num)


A = Student(study_num=1, age=19, sex='男')
B = Student(study_num=2, age=20, sex='男')
C = Student(study_num=3, age=18, sex='女')
print(Student.num)
