//定义两个普通函数，用函数指针分别指向它们并调用。
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a = 10, b = 5;
    
    int (*p)(int, int);  // 定义函数指针

    // 1. 指向 add
    p = add;
    printf("调用 add: %d\n", p(a, b));

    // 2. 指向 sub
    p = sub;
    printf("调用 sub: %d\n", p(a, b));

    return 0;
}