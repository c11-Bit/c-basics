// 求字符串长度，不用 string.h
// 原理：从第一个字符开始数，遇到 '\0' 停止
#include<stdio.h>
int a(char s[]){//定义char s[]为字符串数组
int i=0;
while(s[i]!='\0'){//s[i]为s这个这个字符串数组下标i对应的值
	i++;
}
 return i;
}
int main(){
	char s[100];//定义一个字符串数组可以容纳的空间
	scanf("%s",s);//输入字符串
	printf("%d",a(s));//a(s）调用函数 将scanf里的s调用 接受return返回来的值然后输出
	return 0;
}