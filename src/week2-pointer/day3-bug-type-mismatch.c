//数组指针类型不匹配
// 故意类型不匹配
// arr 是二维数组名，类型是 int (*)[4]
// 用 int* 接，类型不匹配
#include <stdio.h>
int main() {
    int arr[3][4] = {0};
    
    int *p = arr;   // ❌ 类型不匹配，警告/报错
    
    printf("%p\n", p);
    return 0;
}