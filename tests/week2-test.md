# 第2周周测

## 第1题：指针基础
int a = 100;
int *p = &a;
*p：a的值

p：整型指针变量 a的地址

&p：取出p变量本身的地址

&a：取出a变量的地址

sizeof(p)：指针变量本身大小

sizeof(*p)：指针所指向变量类型的大小

## 第2题：指针与数组
1.用指针遍历数组，打印所有元素。
2.用指针求出数组的最大值，并打印。
3.用指针将数组原地逆序，并打印逆序后的结果
#include<stdio.h>
int main(){
	//遍历数组 
	int arr[6] = {10, 20, 30, 40, 50, 60};
	int *p=arr;
	int i;
	for(i=0;i<6;i++){
		printf("%d ",*(p+i));  //用 *(p + i) 其中 p 没变 靠 i 偏移 等价于 arr[i]
	}
	printf("\n");
	
	//最值 
	int max=*p;  //max 初始化为 *p（即 arr[0]） 然后从 i = 1 开始比较
	for (i = 1; i < 6; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
        printf("最大值:%d",*(p+i));
        printf("\n");
        
    //指针数组逆序
		 int *left = arr;            // 指向开头
         int *right = arr + 6 - 1;   // 指向结尾
         int temp;
 
    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

    // 打印逆序后的结果
    printf("逆序后: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

## 第3题：用指针参数统计并返回数组中的奇数和偶数个数
// 统计奇数和偶数个数
// even_count 和 odd_count 用来把结果带回 main 函数
#include <stdio.h>

void split(int *arr, int len, int *even_count, int *odd_count) {
    // 初始化计数器
    *even_count = 0;
    *odd_count = 0;

    int i;
    for (i = 0; i < len; i++) {
        // 使用指针偏移访问元素，符合全用指针的要求
        if (*(arr + i) % 2 == 0) {
            (*even_count)++;  // 注意：必须加括号！*even_count++ 是错的
        } else {
            (*odd_count)++;
        }
    }
}

int main() {
    int n, i;
    int arr[100];
    int even = 0, odd = 0;

    printf("请输入数组元素个数: ");
    scanf("%d", &n);

    printf("请输入 %d 个数字: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 把 even 和 odd 的地址传进去
    split(arr, n, &even, &odd);

    printf("奇数个数: %d, 偶数个数: %d\n", odd, even);

    return 0;
}

## 第四题：找bug
#include <stdio.h>

int* get_num() {
    int a = 10;
    return &a;
}

int main() {
    int *p;
    *p = 20;
    
    int arr[3] = {1, 2, 3};
    int *q = arr;
    printf("%d", *(q+3));
    
    return 0;
}
Bug 1（第 5 行）：return &a;

原因：返回了局部变量的地址。a 是局部变量，函数 get_num 结束后，a 的内存会被销毁，返回的地址变成野指针。

Bug 2（第 10 行）：int *p; *p = 20;

原因：p 是未初始化的指针（野指针）。直接对 *p 赋值，相当于往一个未知的随机内存地址里写数据，会导致程序崩溃（段错误）。

Bug 3（第 14 行）：*(q+3)

原因：数组越界。arr 只有 3 个元素（下标 0、1、2），q+3 指向的是 arr[3]，已经超出了数组的有效范围，读取到的是未知垃圾值。