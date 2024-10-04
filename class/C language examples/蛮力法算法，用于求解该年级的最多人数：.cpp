#include <stdio.h>

int main() {
    int max_people = 0;
    for (int boat1 = 1; boat1 <= 100; boat1++) { // 假设最多有100只船
        for (int boat2 = 1; boat2 <= 100; boat2++) { // 同样地，假设最多有100只船
            if ((boat1 * 10 - 2) == (boat2 * 8 + 1)) { // 条件一：多出2个座位
                int people = boat1 * 10;
                if (people > max_people) {
                    max_people = people;
                }
            }
        }
    }
    printf("该年级的最多人数为: %d\n", max_people);
    return 0;
}
	//以下是一个使用 C 语言的蛮力法算法，用于求解该年级的最多人数：	
	#include <stdio.h>

int main() {
    int boat1, boat2, max_people;
    
    // 根据条件一解方程得到船只数量
    boat1 = 18;
    boat2 = boat1 + 1;
    
    // 计算最多人数
    max_people = boat1 * 10;
    
    printf("该年级的最多人数为: %d\n", max_people);
    return 0;
}
