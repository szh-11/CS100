// // // #include <stdio.h>
// // // int main()
// // // {
// // //     // int a, b;
// // //     // scanf("%d%d", &a, &b);
// // //     // printf("%d\n", a * b);
// // //     // printf("hello world");
// // //     // char c = 's';
// // //     // printf("%d\n", c - ('a' - 'A'));
// // //     // printf("%c\n", c - ('a' - 'A'));
// // //     // unsigned uval = -5;
// // //     // printf("%u\n", uval);
// // //     int ival = 45;
// // //     printf("%lf", ival / 2.0);
// // //     return 0;
// // // }

// // #include <stdio.h>
// // #include <string.h>
// // #include <math.h>
// // int main()
// // {
// //     int day;
// //     scanf("%d", &day);
// //     // for (int i = 1; i <= day;i++){}
// //     char tier[10];
// //     scanf("%s/n", tier);
// //     int Mult_Cast = 0;
// //     for (int i = 1; i <= day; i++)
// //     {
// //         // printf("%d", i);
// //         long long Hp_my, Hp_enemy;
// //         scanf("%lld", &Hp_my);
// //         scanf("%lld", &Hp_enemy);
// //         double T_sand;
// //         scanf("%lf", &T_sand);

// //         int attack = 0;
// //         double t = 0;
// //         while (1)
// //         {

// //             // 如果时间在4.25.。。。4.75什么的，没遇到一个都要加一次2

// //             // if ((int)t > 1 && ((int)t - 1) % 4 == 0)
// //             // {
// //             //     attack += 2;
// //             // }
// //             // for (int a = 1; a <= (int)t / 4; a++)
// //             // {

// //             //     while (4 * a < t && t <= 4 * a + Mult_Cast * 0.25)
// //             //     {

// //             //         attack += 2;
// //             //         break;
// //             //     }
// //             // }

// //             // if ((int)t > 1 && ((int)t ) % 4 == 0)

// //             int calculator = 0;

// //             // if (t >= 4.0 && fabs(t - round(t / 4.0) * 4.0) < 1e-9)
// //             // {
// //             //     calculator = Mult_Cast; // 设置连击次数
// //             // }

// //             // // 步骤二：只要连击计数器大于0，就执行加毒并减少计数
// //             // if (calculator > 0)
// //             // {
// //             //     attack += 2;  // 每次加 2 层毒
// //             //     calculator--; // 连击次数减 1
// //             // }
// //             // 整点结算。当下时间应该面对的药，最终算完attack归零，之后重新加上去
// //             while (t == (int)t)
// //             {
// //                 if ((int)t > 1 && ((int)t - 1) % 4 == 0)
// //                 {
// //                     attack += 2;
// //                 }
// //                 int time = (int)t;
// //                 // int attack;
// //                 // attack += ((time - 1) / 4) * 2;
// //                 printf("%d\n", attack);
// //                 Hp_my -= ((time - 1) / 4) * 2;
// //                 Hp_enemy -= attack;
// //                 // attack = 0;
// //                 printf("%d\n", Hp_my);
// //                 printf("%d\n", Hp_enemy);
// //                 break;
// //             }
// //             if (t >= 4.0 && fabs(t - round(t / 4.0) * 4.0) < 1e-9)
// //             {
// //                 calculator = Mult_Cast; // 设置连击次数
// //                 printf("%d\n", calculator);
// //             }

// //             // 步骤二：只要连击计数器大于0，就执行加毒并减少计数
// //             if (calculator > 0)
// //             {
// //                 attack += 2;  // 每次加 2 层毒
// //                 calculator--; // 连击次数减 1
// //                 printf("%d\n", attack);
// //             }

// //             while (t >= T_sand)
// //             {
// //                 int num;
// //                 num = (t - T_sand) / 0.25;
// //                 Hp_my -= 1 + num * 2;
// //                 Hp_enemy -= 1 + num * 2;
// //                 printf("%d\n", Hp_my);
// //                 printf("%d\n", Hp_enemy);

// //                 break;
// //             }

// //             if (Hp_my > 0 && Hp_enemy <= 0)
// //             {
// //                 printf("Win at %.2fs\n", (double)t);

// //                 if (strcmp(tier, "silver") == 0)
// //                 {
// //                     Mult_Cast += 1;
// //                     while (Mult_Cast >= 4)
// //                     {
// //                         Mult_Cast = 0;
// //                     }
// //                 }
// //                 if (strcmp(tier, "gold") == 0)
// //                 {
// //                     Mult_Cast += 2;
// //                     while (Mult_Cast >= 6)
// //                     {
// //                         Mult_Cast = 0;
// //                     }
// //                 }
// //                 if (strcmp(tier, "diamond") == 0)
// //                 {
// //                     Mult_Cast += 3;
// //                     while (Mult_Cast >= 8)
// //                     {
// //                         Mult_Cast = 0;
// //                     }
// //                 }
// //                 break;
// //                 // return 0;
// //             }

// //             if (Hp_my <= 0 && Hp_enemy > 0)
// //             {
// //                 printf("Lose at %.2fs\n", (double)t);
// //                 break;
// //                 // return 0;
// //             }
// //             if (Hp_my <= 0 && Hp_enemy <= 0)
// //             {
// //                 printf("Draw at %.2fs\n", (double)t);
// //                 break;
// //                 // return 0;
// //             }
// //             t += 0.25;
// //             printf("%f\n", t);
// //         }
// //     }
// //     return 0;
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     // int a, b;
// //     // scanf("%d%d", &a, &b);
// //     // printf("%d\n", a * b);
// //     // printf("hello world");
// //     // char c = 's';
// //     // printf("%d\n", c - ('a' - 'A'));
// //     // printf("%c\n", c - ('a' - 'A'));
// //     // unsigned uval = -5;
// //     // printf("%u\n", uval);
// //     int ival = 45;
// //     printf("%lf", ival / 2.0);
// //     return 0;
// // }

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int day;
    scanf("%d", &day);
    // for (int i = 1; i <= day;i++){}
    char tier[10];
    scanf("%s/n", tier);
    int Mult_Cast = 0;
    for (int i = 1; i <= day; i++)
    {
        // printf("%d", i);
        long long Hp_my, Hp_enemy;
        scanf("%lld", &Hp_my);
        scanf("%lld", &Hp_enemy);
        double T_sand;
        scanf("%lf", &T_sand);

        int attack = 0;
        double t = 0;
        while (1)
        {

            // 如果时间在4.25.。。。4.75什么的，没遇到一个都要加一次2

            // if ((int)t > 1 && ((int)t - 1) % 4 == 0)
            // {
            //     attack += 2;
            // }
            // for (int a = 1; a <= (int)t / 4; a++)
            // {

            //     while (4 * a < t && t <= 4 * a + Mult_Cast * 0.25)
            //     {

            //         attack += 2;
            //         break;
            //     }
            // }

            // if ((int)t > 1 && ((int)t ) % 4 == 0)

            int calculator = 0;

            // if (t >= 4.0 && fabs(t - round(t / 4.0) * 4.0) < 1e-9)
            // {
            //     calculator = Mult_Cast; // 设置连击次数
            // }

            // // 步骤二：只要连击计数器大于0，就执行加毒并减少计数
            // if (calculator > 0)
            // {
            //     attack += 2;  // 每次加 2 层毒
            //     calculator--; // 连击次数减 1
            // }
            // 整点结算。当下时间应该面对的药，最终算完attack归零，之后重新加上去
            while (t == (int)t)
            {
                if ((int)t > 1 && ((int)t - 1) % 4 == 0)
                {
                    attack += 2;
                }
                int time = (int)t;
                // int attack;
                // attack += ((time - 1) / 4) * 2;
                printf("%d\n", attack);
                Hp_my -= ((time - 1) / 4) * 2;
                Hp_enemy -= attack;
                // attack = 0;
                printf("%d\n", Hp_my);
                printf("%d\n", Hp_enemy);
                break;
            }
            if (t >= 4.0 && fabs(t - round(t / 4.0) * 4.0) < 1e-9)
            {
                calculator = Mult_Cast; // 设置连击次数
                printf("%d\n     ", calculator);
            }

            // 步骤二：只要连击计数器大于0，就执行加毒并减少计数
            if (calculator > 0)
            {
                attack += 2;  // 每次加 2 层毒
                calculator--; // 连击次数减 1
                printf("%d\n", attack);
            }

            while (t >= T_sand)
            {
                int num;
                num = (t - T_sand) / 0.25;
                Hp_my -= 1 + num * 2;
                Hp_enemy -= 1 + num * 2;
                printf("%d\n", Hp_my);
                printf("%d\n", Hp_enemy);

                break;
            }

            if (Hp_my > 0 && Hp_enemy <= 0)
            {
                printf("Win at %.2fs\n", (double)t);

                if (strcmp(tier, "silver") == 0)
                {
                    Mult_Cast += 1;
                    while (Mult_Cast >= 4)
                    {
                        Mult_Cast = 0;
                    }
                }
                if (strcmp(tier, "gold") == 0)
                {
                    Mult_Cast += 2;
                    while (Mult_Cast >= 6)
                    {
                        Mult_Cast = 0;
                    }
                }
                if (strcmp(tier, "diamond") == 0)
                {
                    Mult_Cast += 3;
                    while (Mult_Cast >= 8)
                    {
                        Mult_Cast = 0;
                    }
                }
                break;
                // return 0;
            }

            if (Hp_my <= 0 && Hp_enemy > 0)
            {
                printf("Lose at %.2fs\n", (double)t);
                break;
                // return 0;
            }
            if (Hp_my <= 0 && Hp_enemy <= 0)
            {
                printf("Draw at %.2fs\n", (double)t);
                break;
                // return 0;
            }
            t += 0.25;
            printf("%f\n", t);
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int day;
    scanf("%d", &day);
    char tier[10];
    scanf("%s", tier); // 修正：去掉了错误的 /n
    int Mult_Cast = 0;

    for (int i = 1; i <= day; i++)
    {
        long long Hp_my, Hp_enemy;
        scanf("%lld", &Hp_my);
        scanf("%lld", &Hp_enemy);
        double T_sand;
        scanf("%lf", &T_sand);

        int attack = 0;     // 毒层数
        int calculator = 0; // 【修正1】移到这里：连击计数器必须在循环外定义，否则每帧都会重置
        double t = 0;

        while (1)
        {
            // --- 1. 毒伤结算 (每 1.0 秒) ---
            // 必须放在攻击逻辑之前，确保 4.0s 时先扣旧毒，再加新毒
            if (t > 0 && fabs(t - round(t)) < 1e-9)
            {
                // printf("毒伤结算 t=%.2f, 毒层数=%d\n", t, attack);
                Hp_enemy -= attack; // 【修正2】删除了 Hp_my 的错误扣血公式
            }

            // --- 2. 蜘蛛攻击 (每 4.0 秒触发连击) ---
            if (t >= 4.0 && fabs(t - round(t / 4.0) * 4.0) < 1e-9)
            {
                calculator = Mult_Cast; // 设置连击次数
                // printf("触发攻击! t=%.2f, 设置连击次数=%d\n", t, calculator);
            }

            // --- 3. 连击执行 (在 4.0, 4.25, 4.5... 等时间点持续加毒) ---
            if (calculator > 0)
            {
                attack += 2; // 每次加 2 层毒
                calculator--;
                // printf("连击加毒! t=%.2f, 当前毒层数=%d, 剩余连击=%d\n", t, attack, calculator);
            }

            // --- 4. 沙尘暴伤害 ---
            if (t >= T_sand)
            {
                int num = (int)round((t - T_sand) / 0.25);
                int damage = 1 + num * 2;
                Hp_my -= damage;
                Hp_enemy -= damage;

                // printf("沙尘暴伤害 t=%.2f, 伤害=%d\n", t, damage);
            }

            // --- 5. 胜负判定 ---
            if (Hp_my > 0 && Hp_enemy <= 0)
            {
                printf("Win at %.2fs\n", t);
                if (strcmp(tier, "silver") == 0)
                {
                    Mult_Cast += 1;
                    while (Mult_Cast >= 4)
                        Mult_Cast = 0;
                }
                if (strcmp(tier, "gold") == 0)
                {
                    Mult_Cast += 2;
                    while (Mult_Cast >= 6)
                        Mult_Cast = 0;
                }
                if (strcmp(tier, "diamond") == 0)
                {
                    Mult_Cast += 3;
                    while (Mult_Cast >= 8)
                        Mult_Cast = 0;
                }
                break;
            }
            if (Hp_my <= 0 && Hp_enemy > 0)
            {
                printf("Lose at %.2fs\n", t);
                break;
            }
            if (Hp_my <= 0 && Hp_enemy <= 0)
            {
                printf("Draw at %.2fs\n", t);
                break;
            }

            t += 0.25;
        }
    }
    return 0;
}