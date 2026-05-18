
// #include <stdio.h>
// int main()
// {
//     int num_world, num_event;
//     scanf("%d %d", &num_world, &num_event);
//     unsigned int s[1001];
//     int p[1001];
//     int move = 1;
//     unsigned int change;
//     int shift;
//     int min = 1;

//     for (int i = 1; i <= num_world; i++)
//     {
//         p[i] = i;
//         scanf("%d", &s[i]);
//     }

//     // for (int j = 0; j < num_event; j++)
//     // {
//     //     int a, b;
//     //     scanf("%d %d", &a, &b);
//     //     if (a == b)
//     //     {
//     //     }
//     //     else
//     //     {
//     //         p[a] = b;
//     //         shift = move % 32;
//     //         change = (s[a] << shift) | (s[a] >> (32 - shift));
//     //         s[b] = s[b] ^ change;
//     //         // printf("%d", p[b]);

//     //         while (p[b] != b && b != a && p[b] != a)
//     //         {
//     //             move += 1;
//     //             shift = move % 32;
//     //             change = (s[a] << shift) | (s[a] >> (32 - shift));
//     //             s[p[b]] = s[p[b]] ^ change;

//     //             b = p[b];
//     //         }
//     //         // printf("%d", s[b]);

//     //         // for (int i = 2;i<=num_world,i++)
//     //         // {
//     //         //     if(s[i]<s[min]){
//     //         //         min = i;
//     //         //     }
//     //         // }
//     //         // unsigned int rotl32(unsigned int value, int shift)
//     //         // {
//     //         //     shift %= 32;
//     //         //     return (value << shift) | (value >> (32 - shift));
//     //         // }
//     //     }

//     for (int j = 0; j < num_event; j++)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);

//         int modified[1001] = {0}; // ✅ 新增：标记数组（每个事件重置）

//         p[a] = b;
//         int move = 1; // ✅ 移到这里，每个事件重置

//         // 第一步
//         int shift = move % 32;
//         unsigned int change = (s[a] << shift) | (s[a] >> (32 - shift));
//         s[b] ^= change;
//         modified[b] = 1; // ✅ 新增：标记已修改

//         // 后续循环
//         while (p[b] != b && b != a && p[b] != a)
//         {
//             move++;
//             shift = move % 32;
//             change = (s[a] << shift) | (s[a] >> (32 - shift));

//             int nxt = p[b]; // ✅ 新增：先保存下一个

//             // ✅ 新增：检测是否已被修改
//             if (modified[nxt])
//                 break;

//             s[nxt] ^= change;
//             modified[nxt] = 1; // ✅ 新增：标记已修改

//             b = nxt;
#include <stdio.h>

int main()
{
    int num_world, num_event;
    scanf("%d %d", &num_world, &num_event);

    unsigned int s[1001];
    int p[1001];
    int min = 1;

    for (int i = 1; i <= num_world; i++)
    {
        p[i] = i;
        scanf("%u", &s[i]);
    }

    for (int j = 0; j < num_event; j++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            continue;
        }

        int move = 1;

        p[a] = b;
        int shift = move % 32;
        unsigned int change = (s[a] << shift) | (s[a] >> (32 - shift));
        s[b] = s[b] ^ change;

        int modified[1001] = {0};
        modified[b] = 1;

        while (p[b] != b && b != a && p[b] != a)
        {
            move += 1;
            shift = move % 32;
            change = (s[a] << shift) | (s[a] >> (32 - shift));

            int next = p[b]; // ✅ 改5：先保存下一个
            if (modified[next])
                break; // ✅ 改5：检测环

            s[next] = s[next] ^ change;
            modified[next] = 1; // ✅ 改5：标记
            b = next;
        }
    }

    for (int i = 2; i <= num_world; i++)
    {
        if (s[i] < s[min])
        {
            min = i;
        }
    }
    printf("%d\n%u\n", min, s[min]); // ✅ 改2：%d → %u

    return 0;
}