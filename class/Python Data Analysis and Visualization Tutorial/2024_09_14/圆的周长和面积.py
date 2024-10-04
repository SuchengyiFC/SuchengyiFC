import math


def circle_properties(is_area, value):
    """
    根据用户输入的是面积还是周长来计算另一个量及半径
    :param is_area: 布尔值，True表示输入的是面积，False表示输入的是周长
    :param value: 用户输入的值（面积或周长）
    :return: 半径，以及未输入的那个量（周长或面积）
    """
    if is_area:
        # 根据面积求半径和周长
        radius = math.sqrt(value / math.pi)
        circumference = 2 * math.pi * radius
        return radius, circumference
    else:
        # 根据周长求半径和面积
        radius = value / (2 * math.pi)
        area = math.pi * radius ** 2
        return radius, area

    # 用户输入部分


while True:
    print("请输入' area '来计算面积和半径，或输入' circumference '来计算周长和半径:")
    choice = input().lower()

    if choice == 'area':
        print("请输入圆的面积：")
        area = float(input())
        radius, circumference = circle_properties(True, area)
        print(f"半径为: {radius}, 周长为: {circumference}")
    elif choice == 'circumference':
        print("请输入圆的周长：")
        circumference = float(input())
        radius, area = circle_properties(False, circumference)
        print(f"半径为: {radius}, 面积为: {area}")
    elif choice == 'end':
        break
    else:
        print("无效输入，请输入' area '或' circumference '。")
