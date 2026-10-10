// 递归斐波那契
// 边界：n<0 返回 -1
// 终止条件：n==0 返回 0，n==1 返回 1
// 递推：fib(n) = fib(n-1) + fib(n-2)
#include<stdio.h>
int fib(int n){
	if(n<0) return -1;
	if(n==1) return 1;
	if(n>1){
		return fib(n-1) + fib(n-2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
}