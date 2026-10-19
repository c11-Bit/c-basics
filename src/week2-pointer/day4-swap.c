//写 void swap1(int a, int b)（值传递，失败）和 void swap2(int *a, int *b)（地址传递，成功）。对比结果。
#include <stdio.h>

// 版本1：值传递（失败）
// 传的是副本，交换的是 x y，外面的 a b 不变
void swap1(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

// 版本2：地址传递（成功）
// 传的是地址，通过 * 解引用，直接修改外面的 a b
void swap2(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 10, b = 20;

    printf("原始值: a = %d, b = %d\n", a, b);

    // 测试 swap1
    swap1(a, b);
    printf("swap1(值传递)后: a = %d, b = %d\n", a, b);

    // 测试 swap2
    swap2(&a, &b);
    printf("swap2(地址传递)后: a = %d, b = %d\n", a, b);

    return 0;
}
// 原始值: a = 10, b = 20
// swap1(值传递)后: a = 10, b = 20
// swap2(地址传递)后: a = 20, b = 10
