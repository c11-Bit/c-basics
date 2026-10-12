//主函数
//调用函数
//#include "xxx.h" + 调用
#include <stdio.h>
#include "math_func.h"

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a, b));
    printf("%d\n", sub(a, b));
    return 0;
}