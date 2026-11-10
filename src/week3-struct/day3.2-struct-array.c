// 定义 Date 和包含 Date 的 Student，声明包含 3 个学生的数组，循环输入数据并打印
#include <stdio.h>

// 1. 定义嵌套的日期结构体
struct Date {
    int year;
    int month;
    int day;
};

// 2. 定义学生结构体，包含 Date
struct Student {
    char name[20];
    int id;
    struct Date enroll_date; // 嵌套结构体
};

int main() {
    // 3. 声明包含 3 个学生的结构体数组
    struct Student class[3];
    int i;

    printf("请输入 3 个学生的信息 (姓名 学号 入学年份 月 日):\n");
    // 4. 循环输入
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d %d %d", 
              class[i].name, 
              &class[i].id, 
              &class[i].enroll_date.year, 
              &class[i].enroll_date.month, 
              &class[i].enroll_date.day);
    }

    // 5. 循环打印
    printf("\n--- 学生信息 ---\n");
    for (i = 0; i < 3; i++) {
        printf("姓名: %s, 学号: %d, 入学日期: %d-%d-%d\n",
               class[i].name,
               class[i].id,
               class[i].enroll_date.year,
               class[i].enroll_date.month,
               class[i].enroll_date.day);
    }

    return 0;
}