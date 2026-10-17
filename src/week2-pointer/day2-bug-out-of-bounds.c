// 故意数组越界
// arr 只有 5 个元素，下标 0-4
// 访问 p[5] 会越界，读到垃圾值
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int i;

    // 正常访问：0-4
    for (i = 0; i <= 4; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }

    // 越界访问：p[5]
    printf("越界访问 p[5] = %d\n", p[5]);   // ❌ 越界

    return 0;
}