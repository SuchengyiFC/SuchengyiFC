while True:
    try:
        score = int(input("What is your score?"))
        if 0 <= score <= 100:
            if score > 90:
                print("优秀")
            elif score > 80:
                print("良好")
            elif score > 70:
                print("中等")
            elif score > 60:
                print("及格")
            else:
                print("不及格")
        else:
            print("数据不合法")
    except ValueError:
        print("请输入一个有效的数字！")