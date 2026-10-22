//写 get_static 返回静态局部变量的地址，写 get_local 返回局部变量地址
// 返回静态局部变量的地址（安全）
// static 变量在程序运行期间一直存在

#include <stdio.h>
int* get_static() {//指针函数
    static int a = 10;
    return &a;
}

// 2. 返回普通局部变量的地址（危险）
// 局部变量存在栈区，函数结束就销毁
int* get_local() {
    int b = 20;
    return &b;
}

int main() {
    // 接收两个函数的返回值（指针）
    int *p1 = get_static();
    int *p2 = get_local();

    printf("--- 测试 static 变量 ---\n");
    printf("p1 指向的值: %d\n", *p1);  // 安全，输出 10

    printf("--- 测试局部变量 ---\n");
    printf("p2 指向的值: %d\n", *p2);  // 危险！可能是 20，也可能是垃圾值，甚至崩溃

    return 0;
}