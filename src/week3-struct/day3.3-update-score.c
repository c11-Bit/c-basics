//用结构体指针接受day2函数
#include <stdio.h>

struct Date {
    int year, month, day;
};

struct Student {
    char name[20];
    int id;
    struct Date enroll_date;
};

// C 语言传数组时，数组名退化为指针
// 所以 struct Student arr[] 和 struct Student *arr 完全等价
void print_students(struct Student *arr, int len) {
    int i;
    for (i = 0; i < len; i++) {
        // 这里用 arr[i] 是完全合法的 它等价于 （*(arr + i)）.name或（arr+i）->name
        printf("姓名: %s, 学号: %d, 入学日期: %d-%d-%d\n",
               arr[i].name,
               arr[i].id,
               arr[i].enroll_date.year,
               arr[i].enroll_date.month,
               arr[i].enroll_date.day);
    }
}

int main() {
    // 1. 初始化结构体数组
    struct Student class[2] = {
        {"张三", 1001, {2023, 9, 1}},
        {"李四", 1002, {2022, 9, 1}}
    };

    // 2. 调用函数，传入数组名（自动退化为指针）和长度
    print_students(class, 2);

    return 0;
}