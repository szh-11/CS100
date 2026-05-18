

// //void*是一种万能指针
// #include<stdlib.h>

// void free(void *ptr);

// int **p = malloc(sizeof(int *) * n);
// for (int i = 0; i < n; ++i)
// p[i] = malloc(sizeof(int) * m);
// for (int i = 0; i < n; ++i)
// for (int j = 0; j < m; ++j)
// p[i][j] = /* ... */
// // ...
// for (int i = 0; i < n; ++i)
//     free(p[i]);
// free(p)

// //二维数组怎么写， 重点 int **p

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[10] = "abcde";

//     printf("%s\n", strlen(s));

//     s[2] = '\0';
//     printf("%s\n", s);

//     char ztr[100] = "abcdef"; // 由于本身就是数组的首地址，所以scanf不需要&
//     scanf("%s", ztr);
//     printf("%s\n", ztr);

//     // fgets可以把整行都读进去

//     return 0; // 要预留位置放“0”
// }

#include <stdio.h>
#include <string.h> // 必须包含这个头文件

// int main()
// {
//     char str[] = "He\0llo";

//     // 计算长度
//     size_t len = strlen(str);

//     printf(" %zu\n", len); // 输出: 5

//     return 0;
// }
// str = "abcd"

size_t my_string(const char *str)
{
    size_t ans = 0;
    if (*str != '\0')
    {
        ++ans;
        ++str;
    }
    return ans;
}

int main()
{
    printf("%d", my_string("abcd"));
}