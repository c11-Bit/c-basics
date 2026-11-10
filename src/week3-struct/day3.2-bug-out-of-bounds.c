//结构体数组越界”的bug——数组大小为3，却访问了索引为3的元素
#include <stdio.h>

struct Student {
    char name[20];
    int id;
};

int main() {
    // 1. 定义数组大小为 3
    struct Student arr[3] = {
        {"张三", 1001},
        {"李四", 1002},
        {"王五", 1003}
    };
    int i;

    // 2. 正常打印 0, 1, 2
    printf("--- 正常访问 ---\n");
    for (i = 0; i < 3; i++) {
        printf("姓名: %s, 学号: %d\n", arr[i].name, arr[i].id);
    }

    // 3. 越界访问下标为 3 的元素
    printf("\n--- 越界访问 ---\n");
    printf("姓名: %s, 学号: %d\n", arr[3].name, arr[3].id); // ❌ 越界

    return 0;
}