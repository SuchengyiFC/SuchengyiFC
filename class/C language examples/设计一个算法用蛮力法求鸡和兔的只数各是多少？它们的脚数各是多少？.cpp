#include <stdio.h>

int main() {
    int chicken, rabbit;
    for (chicken = 0; chicken <= 555; chicken++) {
        for (rabbit = 0; rabbit <= 555; rabbit++) {
            if (chicken + rabbit == 100 && 2 * chicken + 4 * rabbit == 300) {
                int c1 = chicken / 100; // 百位
                int c2 = (chicken / 10) % 10; // 十位
                int c3 = chicken % 10; // 个位
                int r1 = rabbit / 100; // 百位
                int r2 = (rabbit / 10) % 10; // 十位
                int r3 = rabbit % 10; // 个位
                if (c1 >= 0 && c1 <= 5 && c2 >= 0 && c2 <= 5 && c3 >= 0 && c3 <= 5 &&
                    r1 >= 0 && r1 <= 5 && r2 >= 0 && r2 <= 5 && r3 >= 0 && r3 <= 5) {
                    printf("鸡的数量为：%d, 兔的数量为：%d\n", chicken, rabbit);
                    printf("鸡的脚数为：%d, 兔的脚数为：%d\n", 2*chicken, 4*rabbit);
                }
            }
        }
    }

    return 0;
}
