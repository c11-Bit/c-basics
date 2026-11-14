#include <stdio.h>
#include <string.h>
#include "student.h"

// 定义全局变量，用来存储学生数据
struct Student students[MAX_SIZE];
int count = 0;

// 1. 添加学生
void add_student() {
    if (count >= MAX_SIZE) {
        printf("学生人数已满，无法添加！\n");
        return;
    }
    
    printf("请输入学号: ");
    scanf("%d", &students[count].id);
    printf("请输入姓名: ");
    scanf("%s", students[count].name);
    printf("请输入成绩: ");
    scanf("%f", &students[count].score);
    
    count++;
    printf("添加成功！当前学生总数: %d\n", count);
}

// 2. 删除学生
void delete_student() {
    int id, i, j;
    int found = 0;
    
    if (count == 0) {
        printf("当前没有学生信息，无法删除！\n");
        return;
    }
    
    printf("请输入要删除的学号: ");
    scanf("%d", &id);
    
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("删除成功！\n");
            break;
        }
    }
    
    if (!found) {
        printf("未找到该学号的学生，删除失败！\n");
    }
}

// 3. 修改学生
void modify_student() {
    int id, i;
    int found = 0;
    
    if (count == 0) {
        printf("当前没有学生信息，无法修改！\n");
        return;
    }
    
    printf("请输入要修改的学号: ");
    scanf("%d", &id);
    
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("当前信息: 姓名: %s, 成绩: %.1f\n", students[i].name, students[i].score);
            printf("请输入新的姓名: ");
            scanf("%s", students[i].name);
            printf("请输入新的成绩: ");
            scanf("%f", &students[i].score);
            printf("修改成功！\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("未找到该学号的学生，修改失败！\n");
    }
}

// 4. 查找学生
void find_student() {
    int id, i;
    int found = 0;
    
    if (count == 0) {
        printf("当前没有学生信息，无法查找！\n");
        return;
    }
    
    printf("请输入要查找的学号: ");
    scanf("%d", &id);
    
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("找到学生: 学号: %d, 姓名: %s, 成绩: %.1f\n",
                   students[i].id, students[i].name, students[i].score);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("未找到该学号的学生！\n");
    }
}

// 5. 打印学生列表
void list_students() {
    int i;
    
    if (count == 0) {
        printf("当前没有学生信息！\n");
        return;
    }
    
    printf("\n--- 学生列表 ---\n");
    printf("学号\t姓名\t成绩\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%.1f\n", students[i].id, students[i].name, students[i].score);
    }
    printf("共计 %d 名学生\n", count);
}