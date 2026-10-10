## Day1 全局局部变量重名
#include <stdio.h>

int count = 0;

void func() {
    int count = 5;
    printf("函数内 count = %d\n", count);
}

int main() {
    func();
    printf("函数外 count = %d\n", count);
    return 0;
}