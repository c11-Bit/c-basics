#include <stdio.h>

// 故意数组越界，观察现象
// 数组 arr 只有 5 个元素（下标 0-4）
// 循环写成 i <= 5，i=5 时 arr[5] 越界
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i <= 5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
//输出
// 1
// 2
// 3
// 4
// 5
// -858993460   ← 越界读到的垃圾值