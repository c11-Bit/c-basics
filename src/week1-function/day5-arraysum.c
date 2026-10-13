//递归数组元素求和
//先输入n，再输入n个数
#include<stdio.h>
int sum(int arr[],int n){
if(n<=0) return 0;
return arr[n-1]+sum(arr,n-1);//最后一个元素 + 前 n-1 个元素之和
}
int main(){
	int arr[100];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);//&arr[i]表示可以输入n个整数作为arr数组的值
	}
	printf("%d\n",sum(arr, n));
	return 0;
}
//arr【5】={1，2，3，4，5}
// = arr[4] + sum(arr, 4)
// = 5      + sum(arr, 4)
// sum(arr, 4)
// = arr[3] + sum(arr, 3)
// = 4      + sum(arr, 3)
// sum(arr, 3)
// = arr[2] + sum(arr, 2)
// = 3      + sum(arr, 2)
// sum(arr, 2)
// = arr[1] + sum(arr, 1)
// = 2      + sum(arr, 1)
// sum(arr, 1)
// = arr[0] + sum(arr, 0)
// = 1      + sum(arr, 0)
// sum(arr, 0)
// = 0        ← 终止条件，返回 0
// 二、回程阶段（往上返）
// sum(arr, 1) = 1 + 0  = 1
// sum(arr, 2) = 2 + 1  = 3
// sum(arr, 3) = 3 + 3  = 6
// sum(arr, 4) = 4 + 6  = 10
// sum(arr, 5) = 5 + 10 = 15
// 最终返回 15。