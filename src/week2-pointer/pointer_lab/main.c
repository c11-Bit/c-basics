//主函数，调用测试
#include <stdio.h>
#include "array_utils.h"
#include "string_utils.h"
//最值
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max,min;
    find_max_min(arr,n,&max,&min);
    printf("最大值：%d 最小值：%d",max,min);

//逆序数组
    //int n;//定义一遍就行
    int i;
    //int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse_array(arr,n);
     for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
     }


//字符串
    char str[100];
    
    printf("请输入一个字符串(不要空格): ");
    scanf("%s", str);
    
    printf("原字符串长度: %d\n", my_strlen(str));
    
    reverse_string(str);
    printf("反转后的字符串: %s\n", str);
    return 0;
}