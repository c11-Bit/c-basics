//定义 int arr[5] = {1,2,3,4,5};，用指针 p 遍历数组，打印每个元素的值
#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int i;
	for(i=0;i<5;i++){   //或者p不移动 用*（p+i）
		printf("%d",*p);
		p++;
	}
	return 0;
}