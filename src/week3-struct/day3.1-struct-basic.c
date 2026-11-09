//定义一个 struct Book，包含书名（字符数组）、价格（float）、出版年份（int）。在 main 中初始化两本书，打印它们的信息。
#include<stdio.h>
#include<string.h>
struct Book{
	char Name[50];
	float monay;
	int year;
};

int main(){
	struct Book b1;//定义一个变量后面才能使用
	strcpy(b1.Name, "书名");//字符串赋值
	b1.monay=60;//传参
	b1.year=2008;//传参
	printf("书1: %s, 价格: %.1f, 年份: %d\n", b1.Name, b1.monay, b1.year);
	return 0;
}