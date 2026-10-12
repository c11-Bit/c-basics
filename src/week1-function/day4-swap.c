//交换两整数
#include<stdio.h>
int swap(int x,int y){
	int t=x;
	x=y;
	y=t;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("交换前:%d %d",a,b);
	printf("交换后:%d %d",a,b);
	return 0;
}
//两次输出都是一样的 交换失败
//值传递交换，交换失败
//原因：传的是副本，函数里改的是副本
//将a b的值拷贝给x y x y出了作用域生命周期结束