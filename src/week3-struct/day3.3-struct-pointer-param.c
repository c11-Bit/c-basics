//写一个函数 接收结构体指针 修改学生成绩
#include<stdio.h>
struct Student{
	float score;
};
void update_score(struct Student *s, int new_score){
	s->score = new_score; // 通过指针直接修改实体
}
int main(){
	// 1. 定义一个学生实体
    struct Student s1 = {85.5};
    
    printf("修改前成绩: %.1f\n", s1.score);
    
    // 2. 把 s1 的地址传进去，把成绩改成 99
    update_score(&s1, 99);
    
    // 3. 打印，看看是否被改掉了
    printf("修改后成绩: %.1f\n", s1.score);

    return 0;
}