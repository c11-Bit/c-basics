//递归1~n累加
#include<stdio.h>
int sum(int x){
	if (x < 1) return 0;
    if (x == 1) return 1;
   return x+sum(x-1);
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",sum(a));
	return 0;
}
//sum(5) = 5 + sum(4)
// sum(4) = 4 + sum(3)
// sum(3) = 3 + sum(2)
// sum(2) = 2 + sum(1)
// sum(1) = 1              ← 终止条件
// 回程：
// sum(1) = 1
// sum(2) = 2 + 1 = 3
// sum(3) = 3 + 3 = 6
// sum(4) = 4 + 6 = 10
// sum(5) = 5 + 10 = 15
