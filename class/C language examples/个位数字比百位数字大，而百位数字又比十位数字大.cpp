#include <stdio.h>

int main() {
    int number;
    for (number = 100; number <= 999; number++) {
        int digit1 = number / 100; // ��λ
        int digit2 = (number / 10) % 10; // ʮλ
        int digit3 = number % 10; // ��λ
        if (digit3 > digit1 && digit1 > digit2 && (digit1 + digit2 + digit3) == (digit1 * digit2 * digit3)) {
            printf("������������λ��Ϊ��%d\n", number);
        }
    }

    return 0;
}
