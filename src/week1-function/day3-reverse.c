//递归反向打印字符串
#include<stdio.h>
void reverse(char s[],int i){//接受调用的s s[]的对应为s
	if(s[i]=='\0') return;//判断结束
	reverse(s,i+1);//函数递归i+1对应下标 s[i+1]下标对应的字符
	printf("%c",s[i]);
}
int main(){
	char s[100];//定义一个字符串数组s
	scanf("%s",s);
	reverse(s,0);//输入字符串后（存在s里面）调用上去
	printf("\n");
	return 0;
}
//reverse(s, 0)          → 还没打印，先递归
//  reverse(s, 1)        → 还没打印，先递归
//    reverse(s, 2)      → 还没打印，先递归
//      reverse(s, 3)    → 还没打印，先递归
//        reverse(s, 4)  → 还没打印，先递归
//          reverse(s, 5)→ s[5]=='\0'，return
//          printf("o")  ← 回程1：打印 s[4]
//        printf("l")    ← 回程2：打印 s[3]
//      printf("l")      ← 回程3：打印 s[2]
//    printf("e")        ← 回程4：打印 s[1]
//  printf("h")          ← 回程5：打印 s[0]