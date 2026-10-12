//头文件
//放函数声明

//头文件保护宏
//#ifndef XXX_H        // 第1步：如果没定义过 XXX_H
//#define XXX_H        // 第2步：定义 XXX_H

// 这里放函数声明

//#endif               // 第3步：结束
//.c文件会多次include这个函数声明 保护宏就是保护这个情况防止重复
#ifndef MATH_FUNC_H
#define MATH_FUNC_H

int add(int a, int b);
int sub(int a, int b);

#endif