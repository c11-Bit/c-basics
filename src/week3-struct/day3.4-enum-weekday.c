//定义一个枚举 enum Weekday { MON=1, TUE, WED, THU, FRI, SAT, SUN };，输入一个数字（1-7），打印对应的英文星期名
#include<stdio.h>
enum Weekday{
	MON = 1,
	TUE = 2,
	WED = 3,
	THU = 4,
	FRI = 5,
	SAT = 6,
	SUN = 7
};
int main(){
	int day;
	scanf("%d",&day);
	switch(day){
		case 1: printf("Monday"); break;
		case 2: printf("Tuesday"); break;
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
		case 7: printf("Sunday"); break;
		default:
			printf("输入错误！\n");
            break;
	}
	return 0;
}