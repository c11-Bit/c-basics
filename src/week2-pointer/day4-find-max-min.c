//写函数 void find_max_min(int *arr, int len, int *max, int *min)，通过指针参数返回数组的最大值和最小值。

#include <stdio.h>

// 函数：找最大值和最小值
// 参数：arr是数组，len是长度，max_ptr和min_ptr是用来带回结果的指针
void find_max_min(int arr[], int len, int *max_ptr, int *min_ptr) {
    // 1. 假设第一个数就是最大和最小
    *max_ptr = arr[0];
    *min_ptr = arr[0];
    
    // 2. 从第二个数开始，和假设的最大/最小比
    for (int i = 1; i < len; i++) {
        if (arr[i] > *max_ptr) {
            *max_ptr = arr[i];  // 发现更大的，改掉 max_ptr 指向的值
        }
        if (arr[i] < *min_ptr) {
            *min_ptr = arr[i];  // 发现更小的，改掉 min_ptr 指向的值
        }
    }
}

int main() {
    int n;
    int arr[100];
    int max_val, min_val; // 准备两个空盒子，用来装结果
    
    // 1. 用户输入长度和数组
    printf("请输入数字个数: ");
    scanf("%d", &n);
    
    printf("请输入 %d 个数字: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. 调用函数。把 max_val 和 min_val 的地址交出去！
    find_max_min(arr, n, &max_val, &min_val);

    // 3. 打印结果
    printf("最大值是: %d\n", max_val);
    printf("最小值是: %d\n", min_val);

    return 0;
}