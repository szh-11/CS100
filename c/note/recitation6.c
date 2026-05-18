// int的范围是（-2147483648，2147483648）

#include <stdio.h>
int main()
{
    int ival = 1000000;

    long long lval_2 = (long long)ival * ival;
    printf("%lld\n", lval_2);
    return 0;
}

// f()+g()-h()顺序是unspecified
//&&，||，？：，求值顺序是确定的

// cond？t:f先求cond