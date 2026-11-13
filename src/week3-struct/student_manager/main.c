#include <stdio.h>
#include "student.h"

int main() {
    int choice;

    while (1) {
        printf("\n=== 学生成绩管理系统 ===\n");
        printf("1. 添加学生\n");
        printf("2. 删除学生\n");
        printf("3. 修改学生\n");
        printf("4. 查找学生\n");
        printf("5. 打印学生列表\n");
        printf("0. 退出系统\n");
        printf("请选择操作: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                modify_student();
                break;
            case 4:
                find_student();
                break;
            case 5:
                list_students();
                break;
            case 0:
                printf("退出系统，再见！\n");
                return 0;
            default:
                printf("输入无效，请重新选择。\n");
        }
    }
    return 0;
}