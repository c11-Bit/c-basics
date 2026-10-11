#include <stdio.h>

// 故意不声明就调用，观察编译报错
int main() {
    int r = add(3, 5);   // 没声明 add
    printf("%d\n", r);
    return 0;
}

int add(int a, int b) {
    return a + b;
}