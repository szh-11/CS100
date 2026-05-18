#include <stdio.h>

void fun(int *px)
{
    *px = 42;
}
int main(void)
{
    int i = 30;
    fun(&i);
    int a[3] = {1, 2, 3};
    printf("%d\n", a[0]);
    printf("%d\n", a);
    printf("%d\n", i);
}

// 通过地址的解引用，获得变量的控制权，把地址给函数（变成指针）

// array   arr[i]范围是0-N左开右闭

// int a[10] = {2, 3, 5, 7}; // Correct: Initializes a[0], a[1], a[2], a[3]后面的就做零初始化
// a[4][3]                   // 二维数组行优先，都是左闭右开的no matter row or column,未被初始化的element都会被零初始化
// int*只是一个指针，
// 需要数组的话，用循环来写，直接a是调用首地址