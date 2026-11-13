#ifndef STUDENT_H
#define STUDENT_H

#define MAX_SIZE 100//宏定义 以后只要在代码里看到 MAX_SIZE就统统把它替换成 100更方便

// 定义学生结构体
struct Student {
    int id;         // 学号
    char name[20];  // 姓名
    float score;    // 成绩
};

// 声明功能函数
void add_student();
void delete_student();
void modify_student();
void find_student();
void list_students();

#endif
