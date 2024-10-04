#include <stdio.h>

// 计算逆序对的数量
int array(int arr[], int n) {
    int x= 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                printf("<%d, %d>\n", arr[i], arr[j]);  // 输出每个逆序对
                x++;
            }
        }
    }
    return x;
}

int main() {
    int arr[] = {3, 1, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = array(arr, n);
    printf("逆序对的个数为：%d\n", result);
    return 0;
}
