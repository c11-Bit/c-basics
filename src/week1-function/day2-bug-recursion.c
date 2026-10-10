#include <stdio.h>
   printf("%d\n", n);
    bad_recursion(n + 1);   // 没有终止条件
}

int main() {
    bad_recursion(1);
    return 0;
}