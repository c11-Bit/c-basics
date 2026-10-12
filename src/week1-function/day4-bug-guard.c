// 故意不写保护宏，观察重复定义报错
int add(int a, int b);   // 声明
int add(int a, int b);   // 又声明一遍

int main() {
    return 0;
}
//这里故意重复声明 且没有保护宏
//会报错 add被重复声明/定义 导致冲突