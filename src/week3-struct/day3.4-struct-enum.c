//定义一个 struct Task，包含任务名、状态（使用枚举 enum Status { TODO, DOING, DONE }），声明一个任务结构体，打印其内容
#include <stdio.h>

// 定义枚举状态
enum Status {
    TODO,   // 默认 0
    DOING,  // 默认 1
    DONE    // 默认 2
};

// 定义任务结构体，嵌套枚举
struct Task {
    char name[50];
    enum Status status;
};

int main() {
    // 声明并初始化一个任务
    struct Task t1 = {"学习C语言", DOING};

    printf("任务名: %s\n", t1.name);
    
    // 打印状态
    printf("任务状态: ");
    switch (t1.status) {
        case TODO:
            printf("待办\n");
            break;
        case DOING:
            printf("进行中\n");
            break;
        case DONE:
            printf("已完成\n");
            break;
    }

    return 0;
}