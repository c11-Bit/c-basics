//定义 char c = 'A'; 和 int i = 65;，分别用 char* 和 int* 指向它们，打印指针本身的大小 sizeof(p)，观察在64位系统下是否都是8字节。
#include<stdio.h>
int main(){
	char c='A';
	int i=65;
	char * pc=&c;
	int *pi=&i;
	printf("%zu\n%zu\n",sizeof(*pc),sizeof(*pi));
	printf("%zu\n%zu\n",sizeof(pc),sizeof(pi));
	return 0;
}
// 输出：
// 1
// 4
// 8
// 8
//sizeof(pc) sizeof(pi) 都是指向指针本身 64位电脑就是8字节
//sizeof(*pc) sizeof(*pi) 都是指向指针类型 int类型4字节 char类型1字节
