//用指针逆序数组（不用下标）
// 思路：left 指向头，right 指向尾，交换后向中间靠拢
#include <stdio.h>
int main() {
    int arr[5];
    int i;
    int *left, *right, temp;
    for (i = 0; i < 5; i++) {// 输入 5 个数
        scanf("%d", &arr[i]);
    }

    left = arr;// 指向第一个元素
    right = arr + 4;// 指向最后一个元素

    // 双指针交换，直到中间相遇
    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;             // 左指针向右移
        right--;            // 右指针向左移
    }

    // 打印逆序后的结果
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);//arr[i]等价于*(arr+i)
    }
    printf("\n");

    return 0;
}