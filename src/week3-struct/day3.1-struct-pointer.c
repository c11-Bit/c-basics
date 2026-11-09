//使用 typedef 简化上述结构体定义。定义一个结构体指针指向其中一本书，通过指针（使用 ->）修改书的价格，并打印修改后的值
#include <stdio.h>

// 1. 用 typedef 给结构体起别名 Book
// 这样以后定义变量就不需要写 struct 了
typedef struct {
    char Name[50];
    float monay;
    int year;
} Book;

int main() {
    // 2. 直接用 Book 定义变量，并初始化
    Book b1 = {"C语言程序设计", 59.9, 2020};

    // 3. 定义结构体指针 p，指向 b1
    Book *p = &b1;

    // 4. 用指针 -> 修改价格
    p->monay = 88.8;

    // 5. 打印（故意用 b1 打印，证明指针确实改到了实体）
    printf("书名: %s\n", p->Name);
    printf("修改后的价格: %.1f\n", b1.monay); // 输出 88.8

    return 0;
}