//定义 int a = 10;，用指针 p 指向 a，通过 *p 修改 a 的值，打印修改前后 a 的值和 p 指向的地址。
#include<stdio.h>
int main(){
	int a=10;
	int* p=&a;//定义指针p 存a的地址
	printf("修改前：%d",a);
	*p=20;//通过指针修改a的值
	printf("修改后：%d",a);
	return 0;
}