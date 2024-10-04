# 定义一个简单的函数，该函数接收两个参数并返回它们的和  
def add_numbers(a, b):
    """  
    这个函数接收两个数字作为参数，并返回它们的和。  

    参数:  
    a -- 第一个数字  
    b -- 第二个数字  

    返回:  
    两个数字的和  
    """
    return a + b


# 调用函数
result = add_numbers(5, 3)
print(result)  # 输出: 8


# 定义一个函数，返回两个数的和与差
def sum_and_difference(a, b):
    return a + b, a - b


# 调用函数并接收两个返回值
sum_value, difference_value = sum_and_difference(10, 5)
print(f"Sum: {sum_value}, Difference: {difference_value}")  # 输出: Sum: 15, Difference: 5