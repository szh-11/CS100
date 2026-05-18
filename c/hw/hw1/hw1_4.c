#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    long long total = 0;
    int num = -1;
    // if (a >= pow(2, 31) || a <= -pow(2, 31))
    // {
    //     // printf("%f\n", pow(2, 31));
    //     printf("%d\n", 0);
    // }

    if (a == 0)
    {
        printf("%d\n", 0);
    }

    if (a > 0)
    {
        for (int i = 10; i >= 0; i--)
        {
            int b = a / pow(10, i);
            if (b == 0)
            {
            }
            else
            {
                if (num == -1)
                {
                    num = i;
                }
                total += (b)*pow(10, num - i);
                // printf("%d\n", (b));
                // printf("%d\n", total);
                a = a - b * pow(10, i);
                // printf("%d\n", a);
                // printf("%d\n", total);
            }
        }

        if (total >= pow(2, 31) || total <= -pow(2, 31))
        {
            // printf("%f\n", pow(2, 31));
            printf("%d\n", 0);
        }
        else
            printf("%d\n", total);
    }

    // if (a == 0)
    // {
    //     printf("%d\n", 0);
    // }

    if (a < 0 && a > -pow(2, 31))
    {
        int abs_a = -a;
        for (int i = 10; i >= 0; i--)
        {
            int b = abs_a / pow(10, i);
            if (b == 0)
            {
            }
            else
            {
                if (num == -1)
                {
                    num = i;
                }
                total += (b)*pow(10, num - i);
                // printf("%d\n", (b));

                abs_a = abs_a - b * pow(10, i);
                // printf("%d\n", abs_a);
                // printf("%d\n", -total);
            }
        }

        if (total >= pow(2, 31) || total <= -pow(2, 31))
        {
            // printf("%f\n", pow(2, 31));
            printf("%d\n", 0);
        }
        else
        {
            printf("%d\n", -total);
        }
    }
}

//     {
//         for (int i = 10; i >= 0; i--)
//         {
//             int b = a / pow(10, i);
//             if (b == 0)
//             {
//             }
//             else
//             {
//                 const int num = i;
//                 int total = 0;

//                 total += a / pow(10, i) * pow(10, num - i);
//                 a = a + b * pow(10, i);
//             }
//         }
//     }
// }