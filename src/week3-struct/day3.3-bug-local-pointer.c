//返回局部变量指针的 Bug
#include <stdio.h>

struct Student {
    char name[20];
    int id;
};

// 错误演示：返回局部变量的地址
struct Student* get_student() {
    struct Student s = {"张三", 1001};
    return &s; // ❌ 函数一结束，s 就被销毁了，返回的地址变野指针
}

int main() {
    // 接收这个野指针
    struct Student *p = get_student();
    
    // 试图访问已经销毁的结构体（可能乱码，也可能直接崩溃）
    printf("姓名: %s, 学号: %d\n", p->name, p->id); 

    return 0;
}