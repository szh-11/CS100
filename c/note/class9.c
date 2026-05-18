

char str[] = "abcdef" // 内存里存的就是abcdef\0
    scanf("%s", str);

char str[100];
fgets()

    strlen(str) : Returns the length of the string
                  str.strcpy(dest, src) : Copies the string
                                          src to
                                          strcat(dest, src) : Appends a copy of
                                                              dest.src to the end of
                                                              strcmp(s1, s2) : Compares two strings in lexicographical order.strchr(str, ch) : Finds the first occurrence of
                                                                                                                                               ch in
                                                                                                                                               dest.str // 喜欢考如何实现

                                                                                                                                               size_t i = 0 int n = strlen(s)

    // 普通指针
    char *p = "abcde";
p[3] = 'a'

    const char *str = "abcde";
str[3] = 'a'; // compile-error

char arr[] = "abcde";
arr[3] = 'a'

    const char *translations[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

// 地址不一定是紧挨着的

int **p = malloc(sizeof(int *) * n);
for (int i = 0; i < n; ++i)
    p[i] = malloc(sizeof(int) * m);
for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
        scanf("%d", &p[i][j]);

灵活性：每一行可以有不同的长度（锯齿数组）

c
    p[0] = malloc(sizeof(int) * 3); // 第0行3列
p[1] = malloc(sizeof(int) * 5);     // 第1行5列
p[2] = malloc(sizeof(int) * 2);     // 第2行2列
内存效率：不需要提前知道最大行列数，可以动态调整

访问直观：使用 p[i][j] 语法，与静态二维数组一致

    char *
    read_string(void)
{
    char c = getchar();
    while (isspace(c))
        c = getchar();
}