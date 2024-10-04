class Student:
    def __init__(self, study_num):
        self.study_num = study_num

    def print_hello(self):
        print('hello')

a=Student(123456789)
a.print_hello()