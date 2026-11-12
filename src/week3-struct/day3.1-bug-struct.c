//结构体野指针 Bug
#include <stdio.h>

struct Books {
    char Name[50];
    float monay;
};

int main() {
    // ❌ 只定义了指针，没有指向任何有效的内存
    struct Books *p;

    // ❌ 野指针：未分配内存直接访问
    p->monay = 99.9; 

    printf("价格: %.1f\n", p->monay);

    return 0;
}