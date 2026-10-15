## 第1周周测

## 第1题：递归反转整数
// 思路：先打印最后一位，再递归前面的
// 处理负数：先打印负号，转正再处理
#include <stdio.h> 
void reverse(int n) {
    if (n < 0) {
        printf("-");
        n = -n;
    }
    if (n < 10) {//终止条件
        printf("%d", n);
        return;
    }
    printf("%d", n % 10); // 打印最后一位 
    reverse(n / 10); // 递归前面的 去掉最后一位进行递归
}

int main() {
    int a;
    scanf("%d", &a);
    reverse(a);
    printf("\n");
    return 0;
}
reverse(1234)  ← 打印 4
  reverse(123) ← 打印 3
    reverse(12)← 打印 2
      reverse(1)← 打印 1，return


## 第2题：static变量代码阅读题
 #include <stdio.h>
int counter() {
    static int count = 0;//static只在第一次调用初始化 之后每次保留上一次值
    count++;
    return count;
}

int global = 10;

void func1() {
    int global = 20;
    printf("func1 local global = %d\n", global);
}

void func2() {
    static int global = 30;
    global++;
    printf("func2 static global = %d\n", global);
}

int main() {
    printf("counter1 = %d\n", counter());
    printf("counter2 = %d\n", counter());
    printf("counter3 = %d\n", counter());

    printf("main global = %d\n", global);
    func1();
    printf("main global after func1 = %d\n", global);

    func2();
    func2();
    func2();

    return 0;
}
答案
counter1 = 1
counter2 = 2
counter3 = 3
main global = 10
func1 local global = 20
main global after func1 = 10
（func2 static global = 31
func2 static global = 32
func2 static global = 33）->"func2 static global = %d\n"

## 第3题：找bug
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sum(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    return result;
}

int main() {
    int x = 5;
    printf("factorial(%d) = %d\n", x, factorial(x));
    printf("factorial(%d) = %d\n", -1, factorial(-1));

    int y = 10;
    printf("sum(%d) = %d\n", y, sum(y));

    return 0;
}
//bug1
//int factorial(int n) {
//    if (n == 0) {
//        return 1;
//    }
//   return n * factorial(n - 1);
//}
//这里没有限定n小于0的情况