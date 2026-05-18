#include <stdio.h>
int main()
{
    int a;
    int c = 0;
    long total = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        long b;
        scanf("%ld", &b);
        total += b;
        if (b >= c)
        {
            c = b;
        }
        else
        {
            c = c;
        }
    }
    printf("%ld\n", c);
    printf("%ld\n", total * 8);
    return 0;
}