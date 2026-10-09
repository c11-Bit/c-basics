# 每日Bug复盘

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
今天故意写了全局变量 int count = 0;，函数内又定义局部 int count = 5;。
运行后发现函数内打印 5，函数外打印 0。
定位：函数内访问的是局部变量，局部变量屏蔽了同名全局变量。
根因：C语言中局部变量优先级高于全局变量，同名时全局被屏蔽。
教训：命名加前缀区分（g_count/local_count），或尽量避免全局变量。
