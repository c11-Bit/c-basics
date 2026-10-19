//故意在 swap 里写 x = y; 而不是 *x = *y;
// 传了指针，但交换时忘了加 *
// x = y; 只是把指针变量的值（地址）互相赋值
// 外面的 a b 根本没有被改变
#include <stdio.h>
void swap_wrong(int *x, int *y) {
    int *t = x;
    x = y;
    y = t;
}

int main() {
    int a = 10, b = 20;

    printf("交换前: a = %d, b = %d\n", a, b);

    swap_wrong(&a, &b);   // ❌ 错误版本

    printf("交换后: a = %d, b = %d\n", a, b);

    return 0;
}
// 交换前: a = 10, b = 20
// 交换后: a = 10, b = 20 （交换失败）

