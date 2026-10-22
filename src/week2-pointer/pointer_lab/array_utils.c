//数组工具的实现（找最值、逆序）
//最值
#include "array_utils.h"
void find_max_min(int *arr,int len,int* max,int* min){
if(len<=0) return;
*max = *arr;  // 假设第一个是最大
*min = *arr;  // 假设第一个是最小
int i;
for (i = 1; i < len; i++) {
    if (*(arr + i) > *max) *max = *(arr + i);
    if (*(arr + i) < *min) *min = *(arr + i);
}
}
//逆序数组
void reverse_array(int *arr, int len){
    int *left=arr;//将数组第一位元素地址赋给left
    int *right=arr+len-1;//将数组最后一位元素赋给right
    while (left < right) {//前后调换逆序
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}