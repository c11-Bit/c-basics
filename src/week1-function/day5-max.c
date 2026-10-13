//求数组最大值
//先输入n，再输入n个数
#include <stdio.h>
int maxshu(int arr[], int n) {
    if (n <= 0) return -1;
    int max = arr[0]; //假设第一个最大
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    int i;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {//输入n后循环判断能输入n个数
        scanf("%d", &arr[i]);
    }
    printf("%d\n", maxshu(arr, n));//调用到上面
    return 0;
}