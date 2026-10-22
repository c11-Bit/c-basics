//字符串工具的实现（求长度、反转）
//求字符长度
#include "string_utils.h"
int my_strlen(char *s){
    char *p = s;          // 1. p 从头开始
    while (*p != '\0') {  // 2. 只要没遇到结束符
        p++;              // 3. 指针往后走
    }
    return p - s;         // 4. 尾指针减去头指针 = 长度
}

//反转字符串
void reverse_string(char *s){
    char *left=s;
    char *right = s + my_strlen(s) - 1; 
    
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
}
}