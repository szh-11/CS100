

int -- -- -% d unsigned int -- -- -$u float -- -- -% f double -- -- -% lf char -- -- -% c char -- -- --% s(string)

                                                                                                             printf() // 必须要void*
    // malloc的返回值就是void*
    // 从变量名下方出发，逆时针（*parr）【N】指向数组的指针
    int *arr【n】

    // 二维数组的第二维要定义好

    // int a[n][m] a是一个数组，是一个数组的数组，外层数组是长度为m的int数组

    // 扔进去的和接受的第二维一定要一样

    // const一经初始化就不能再改变，所以当然必须初始化

    // const指针

    // const int  *clip=&i指向的东西是const而不是她自己是const low level

    // 顶层const 常量指针 int *const ipc =&ival

    // 他是一个指向int的const*，只能有一个对象

    // C风格字符串末尾必须有一个'\0'

    //     char s[10] = 'abcde';
    // printf("%s\n", s + 1);

    // "\0" ascll为0
    // 缺少\0是undefined behaviour

    // 读取string的时候多用fgets
    //     char str[100];
    // fgets(str, 100, stdin);

    // size_t是一个无符号的整数，不能拿int去和她比较

    // 最好用const定义string，不然只是只读，更改会undefined

    // malloc常考，calloc
    //  void *malloc(size_t size);
    //  void *calloc(size_t num, size_t each_size);
    //  void free(void *ptr);

    // 指针不要乱动，留着free就行了

    // malloc几次free几次
