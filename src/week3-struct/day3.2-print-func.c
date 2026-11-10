//写一个函数 void print_students(struct Student arr[], int len)，接收结构体数组并格式化打印所有学生信息
#include <stdio.h>

struct Date {
    int year, month, day;
};

struct Student {
    char name[20];
    int id;
    struct Date enroll_date;
};

// 因为 C 语言传数组时 数组名会自动退化成指针 所以 struct Student arr[] 和 struct Student *arr 在函数里是完全等价的
// 但在 C 语言里 arr 实际上就是个指针
void print_students(struct Student arr[], int len) {
    int i;
    for (i = 0; i < len; i++) {
        // 直接用下标访问 最直观
        printf("姓名: %s, 学号: %d, 入学日期: %d-%d-%d\n",
               arr[i].name,
               arr[i].id,
               arr[i].enroll_date.year,
               arr[i].enroll_date.month,
               arr[i].enroll_date.day);
    }
}

int main() {
    struct Student class[2] = {
        {"张三", 1001, {2023, 9, 1}},
        {"李四", 1002, {2022, 9, 1}}
    };