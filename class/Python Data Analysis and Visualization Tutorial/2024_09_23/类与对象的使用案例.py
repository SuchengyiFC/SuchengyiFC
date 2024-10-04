#教师类
class Teacher:
    def __init__(self,name):
        self.name = name
#方法1，上课
    def class_begin(self):
        return '上课'
#方法2，根据圆的周长计算圆的面积
    def long_area(self,circle_long):
        r=circle_long/(2*3.14)
        area=3.14*r**2
        return area
#方法3，下课
    def class_over(self):
        return'下课'

    # 学生类


class Student:
    def __init__(self, name):
        self.name = name

    # 方法1，给出圆的周长


    def long(self, circle_long):
        return circle_long

    # 方法2，谢谢老师
    def thank_you(self):
        return'谢谢老师'

da_liu = Teacher('刘')

xiao_hong = Student('红')
xiao_ming = Student('明')
xiao_gang = Student('刚')

print(da_liu.class_begin())
print(da_liu.long_area(
    xiao_hong.long(20)
))
print(da_liu.long_area(
    xiao_gang.long(32)
))
print(da_liu.class_over())