//指针数组
#include<stdio.h>
int main(){
	int arr[3]={10,20,30};
	int *p[3];//定义指针数组
	int i;
	for(i=0;i<3;i++){
		p[i]=&arr[i];//遍历数组
		printf("%d ",*p[i]);
	}
	return 0;
}