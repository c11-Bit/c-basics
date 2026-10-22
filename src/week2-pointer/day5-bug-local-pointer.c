//写一个返回局部变量指针的 bug，观察输出。
#include <stdio.h>

// 严重错误：返回局部变量的地址
// 函数结束时，局部变量 a 被销毁，这块内存被系统回收
// 返回的指针变成了野指针
int* get_num() {
    int a = 10;
    return &a;
}

int main() {
    int *p = get_num();
    
    // 试图访问已经被销毁的内存
    printf("试图读取已销毁的内存: %d\n", *p);  // 输出垃圾值或崩溃

    return 0;
}