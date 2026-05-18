#include <stdio.h>
#define rows 15
#define cols 15
int main()
{
    int num_x = 0;
    int num_o = 0;
    char grid[rows][cols];
    for (int i = 0; i <= 14; i++)
    {
        for (int j = 0; j <= 14; j++)
        {
            scanf(" %c", &grid[i][j]);
        }
    }

    // five in rows&finish num_x,num_x count
    int same_x_rows = 0;
    int same_o_rows = 0;
    for (int i = 0; i <= 14; i++)
    {
        for (int j = 0; j <= 14; j++)
        {
            if (grid[i][j] == 'X')
            {
                same_x_rows += 1;
                num_x += 1;
            }
            if (grid[i][j] != 'X')
            {
                same_x_rows = 0;
            }
            if (grid[i][j] == 'O')
            {
                same_o_rows += 1;
                num_o += 1;
            }
            if (grid[i][j] != 'O')
            {
                same_o_rows = 0;
            }
            if (same_x_rows >= 5 || same_o_rows >= 5)
            {
                printf("AlreadyWin!");

                goto END;
            }
        }
    }
    // printf("%d\n", num_o);
    // printf("%d\n", num_x);

    // 5 five in cols
    int same_x_cols = 0;
    int same_o_cols = 0;

    for (int j = 0; j <= 14; j++)
    {
        for (int i = 0; i <= 14; i++)
        {
            if (grid[i][j] == 'X')
            {
                same_x_cols += 1;
            }
            if (grid[i][j] != 'X')
            {
                same_x_cols = 0;
            }
            if (grid[i][j] == 'O')
            {
                same_o_cols += 1;
            }
            if (grid[i][j] != 'O')
            {
                same_o_cols = 0;
            }
            if (same_x_cols >= 5 || same_o_cols >= 5)
            {
                printf("AlreadyWin!");

                goto END;
            }
        }
    }

    // five in

    // int same_x_right = 0;
    // int same_o_right = 0;
    // 从当前位置向右下方向检查
    int same_x_right = 0;
    int same_o_right = 0;
    for (int i = 0; i <= 14; i++)
    {
        for (int j = 0; j <= 14; j++)
        {
            same_x_right = 0;
            same_o_right = 0;

            for (int a = 0; a < 15; a++)
            {

                // 检查是否越界
                if (a + i > 14 || a + j > 14)
                {
                    break;
                }
                // if (grid[ i+ a][j+a] == player) {
                //     count++;
                // } else {
                //     break;  // 遇到不同棋子，停止计数
                // }

                if (grid[i + a][j + a] == 'X')
                {
                    same_x_right += 1;
                }
                if (grid[i + a][j + a] != 'X')
                {
                    same_x_right = 0;
                }
                if (grid[i + a][j + a] == 'O')
                {
                    same_o_right += 1;
                }
                if (grid[i + a][j + a] != 'O')
                {
                    same_o_right = 0;
                }

                if (same_x_right >= 5 || same_o_right >= 5)
                {
                    printf("AlreadyWin!");

                    goto END;
                }
            }
        }
    }

    // int same_x_left = 0;
    // int same_o_left = 0;
    // // 从当前位置向zuoxia方向检查

    for (int i = 0; i <= 14; i++)
    {
        for (int j = 0; j <= 14; j++)
        {
            int same_x_left = 0;
            int same_o_left = 0;
            // 从当前位置向右下方向检查

            for (int a = 0; a < 15; a++)
            {
                // 检查是否越界
                if (a + i > 14 || j - a < 0)
                {
                    break;
                }
                // if (grid[ i+ a][j+a] == player) {
                //     count++;
                // } else {
                //     break;  // 遇到不同棋子，停止计数
                // }

                if (grid[i + a][j - a] == 'X')
                {
                    same_x_left += 1;
                }
                if (grid[i + a][j - a] != 'X')
                {
                    same_x_left = 0;
                }
                if (grid[i + a][j - a] == 'O')
                {
                    same_o_left += 1;
                }
                if (grid[i + a][j - a] != 'O')
                {
                    same_o_left = 0;
                }

                if (same_x_left >= 5 || same_o_left >= 5)
                {
                    printf("AlreadyWin!");
                    goto END;
                }
            }
        }
    }
    // 上面的都是5个连续

    // 四个连续，判断x
    if (num_x == num_o)
    {
        same_x_rows = 0;
        same_o_rows = 0;

        // 水平方向4连
        for (int i = 0; i <= 14; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                int x_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i][j + k] == 'X')
                    {
                        x_count++;
                    }
                    else if (grid[i][j + k] == '.')
                    {
                        dot_i = i;
                        dot_j = j + k;
                    }
                    else
                    {
                        x_count = -1;
                        break;
                    }
                }
                if (x_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 垂直方向4连
        same_x_cols = 0;
        same_o_cols = 0;
        for (int j = 0; j <= 14; j++)
        {
            for (int i = 0; i <= 10; i++)
            {
                int x_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j] == 'X')
                    {
                        x_count++;
                    }
                    else if (grid[i + k][j] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j;
                    }
                    else
                    {
                        x_count = -1;
                        break;
                    }
                }
                if (x_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 主对角线方向4连（右下）
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                int x_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j + k] == 'X')
                    {
                        x_count++;
                    }
                    else if (grid[i + k][j + k] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j + k;
                    }
                    else
                    {
                        x_count = -1;
                        break;
                    }
                }
                if (x_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 副对角线方向4连（左下）
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 4; j <= 14; j++)
            {
                int x_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j - k] == 'X')
                    {
                        x_count++;
                    }
                    else if (grid[i + k][j - k] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j - k;
                    }
                    else
                    {
                        x_count = -1;
                        break;
                    }
                }
                if (x_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }
    }

    if (num_x > num_o)
    {
        same_x_rows = 0;
        same_o_rows = 0;

        // 水平方向4连（检查O）
        for (int i = 0; i <= 14; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                int o_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i][j + k] == 'O')
                    {
                        o_count++;
                    }
                    else if (grid[i][j + k] == '.')
                    {
                        dot_i = i;
                        dot_j = j + k;
                    }
                    else
                    {
                        o_count = -1;
                        break;
                    }
                }
                if (o_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 垂直方向4连（检查O）
        same_x_cols = 0;
        same_o_cols = 0;
        for (int j = 0; j <= 14; j++)
        {
            for (int i = 0; i <= 10; i++)
            {
                int o_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j] == 'O')
                    {
                        o_count++;
                    }
                    else if (grid[i + k][j] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j;
                    }
                    else
                    {
                        o_count = -1;
                        break;
                    }
                }
                if (o_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 主对角线方向4连（检查O）
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 0; j <= 10; j++)
            {
                int o_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j + k] == 'O')
                    {
                        o_count++;
                    }
                    else if (grid[i + k][j + k] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j + k;
                    }
                    else
                    {
                        o_count = -1;
                        break;
                    }
                }
                if (o_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }

        // 副对角线方向4连（检查O）
        for (int i = 0; i <= 10; i++)
        {
            for (int j = 4; j <= 14; j++)
            {
                int o_count = 0;
                int dot_i = -1, dot_j = -1;
                for (int k = 0; k < 5; k++)
                {
                    if (grid[i + k][j - k] == 'O')
                    {
                        o_count++;
                    }
                    else if (grid[i + k][j - k] == '.')
                    {
                        dot_i = i + k;
                        dot_j = j - k;
                    }
                    else
                    {
                        o_count = -1;
                        break;
                    }
                }
                if (o_count == 4 && dot_i != -1)
                {
                    printf("Win!\n");
                    printf("%d %d", dot_i + 1, dot_j + 1);
                    goto END;
                }
            }
        }
    }

    printf("CannotWin!");

END:
    return 0;
}