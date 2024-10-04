#include <stdio.h>

int main() {
    int number;
    for (number = 100; number <= 999; number++) {
        int digit1 = number / 100; // 百位
        int digit2 = (number / 10) % 10; // 十位
        int digit3 = number % 10; // 个位
        if (digit3 > digit1 && digit1 > digit2 && (digit1 + digit2 + digit3) == (digit1 * digit2 * digit3)) {
            printf("符合条件的三位数为：%d\n", number);
        }
    }

    return 0;
}
