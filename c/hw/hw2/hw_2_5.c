
#include <stdio.h>

int main()
{
    unsigned char whole_group[16];
    for (int i = 0; i < 16; i++)
    {
        scanf("%hhx", &whole_group[i]);
    }

    // unsigned char group_1[4] = {whole_group[0], whole_group[1], whole_group[2], whole_group[3]};
    // unsigned char group_2[4] = {whole_group[4], whole_group[5], whole_group[6], whole_group[7]};
    // unsigned char group_3[4] = {whole_group[8], whole_group[9], whole_group[10], whole_group[11]};
    // unsigned char group_4[4] = {whole_group[12], whole_group[13], whole_group[14], whole_group[15]};

    int little = 0;
    // 小端序
    unsigned int int_1 = (whole_group[0]) |
                         (whole_group[1] << 8) |
                         (whole_group[2] << 16) |
                         (whole_group[3] << 24);

    unsigned int int_2 = (whole_group[4]) |
                         (whole_group[5] << 8) |
                         (whole_group[6] << 16) |
                         (whole_group[7] << 24);

    unsigned int int_3 = (whole_group[8]) |
                         (whole_group[9] << 8) |
                         (whole_group[10] << 16) |
                         (whole_group[11] << 24);

    unsigned int int_4 = (whole_group[12]) |
                         (whole_group[13] << 8) |
                         (whole_group[14] << 16) |
                         (whole_group[15] << 24);

    if (int_1 > 0 && int_2 > 0 && int_3 > 0)
    {
        if ((int_1 * int_2) + int_3 == int_4 && little == 0)
        {
            printf("Little: %u %u %u %u Product\n", int_1, int_2, int_3, int_4);
            little = 1;
            // printf("Result:Little Type");
        }
        else if (int_1 + int_2 + int_3 == int_4 && little == 0)
        {
            printf("Little: %u %u %u %u Sum\n", int_1, int_2, int_3, int_4);
            little = 2;
            // printf("Result:Little Type");
        }

        else
        {
            printf("Little: %u %u %u %u Invalid\n", int_1, int_2, int_3, int_4);
        }
    }
    else
    {
        printf("Little: %u %u %u %u Invalid\n", int_1, int_2, int_3, int_4);
    }

    // 大端序
    int big = 0;
    unsigned int _int_1 = (whole_group[3]) |
                          (whole_group[2] << 8) |
                          (whole_group[1] << 16) |
                          (whole_group[0] << 24);

    unsigned int _int_2 = (whole_group[7]) |
                          (whole_group[6] << 8) |
                          (whole_group[5] << 16) |
                          (whole_group[4] << 24);

    unsigned int _int_3 = (whole_group[11]) |
                          (whole_group[10] << 8) |
                          (whole_group[9] << 16) |
                          (whole_group[8] << 24);

    unsigned int _int_4 = (whole_group[15]) |
                          (whole_group[14] << 8) |
                          (whole_group[13] << 16) |
                          (whole_group[12] << 24);

    if (_int_1 > 0 && _int_2 > 0 && _int_3 > 0)
    {
        if ((_int_1 * _int_2) + _int_3 == _int_4 && big == 0)
        {
            printf("Big: %u %u %u %u Product\n", _int_1, _int_2, _int_3, _int_4);
            big = 1;
            // printf("Result:Big Type");
        }
        else if (_int_1 + _int_2 + _int_3 == _int_4 && big == 0)
        {
            printf("Big: %u %u %u %u Sum\n", _int_1, _int_2, _int_3, _int_4);
            big = 2;
            // printf("Result:Big Type");
        }

        else
        {
            printf("Big: %u %u %u %u Invalid\n", _int_1, _int_2, _int_3, _int_4);
        }
    }
    else
    {
        printf("Big: %u %u %u %u Invalid\n", _int_1, _int_2, _int_3, _int_4);
    }

    if (little == 1 && big == 0)
    {
        printf("Result: Little Product\n");
    }
    if (little == 2 && big == 0)
    {
        printf("Result: Little Sum\n");
    }
    if (little == 0 && big == 1)
    {
        printf("Result: Big Product\n");
    }
    if (little == 0 && big == 2)
    {
        printf("Result: Big Sum\n");
    }
    if (little == 1 && big == 1)
    {
        printf("Result: Both\n");
    }
    if (little == 1 && big == 2)
    {
        printf("Result: Both\n");
    }
    if (little == 2 && big == 1)
    {
        printf("Result: Both\n");
    }
    if (little == 2 && big == 2)
    {
        printf("Result: Both\n");
    }
    if (little == 0 && big == 0)
    {
        printf("Result: None\n");
    }

    return 0;
}
