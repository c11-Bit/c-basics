//联合体（union）共享内存 Bug
#include <stdio.h>

// 联合体：所有成员共享同一块内存
union Data {
    int i;
    char c;
};

int main() {
    union Data d;
    
    // 1. 给 int 成员赋值
    d.i = 100; 

    // 2. 试图读取 char 成员
    // 此时 d.c 会读到什么？
    printf("d.i = %d\n", d.i);
    printf("d.c = %c\n", d.c);   // ❌ 乱码或不可见字符

    return 0;
}
