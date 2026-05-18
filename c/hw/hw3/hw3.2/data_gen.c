#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char rand_ch()
{
    return 33 + rand() % 94;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int max = atoi(argv[2]);

    srand((unsigned int)time(NULL));
    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {

        int len = 1 + rand() % max;
        char *str = (char *)malloc((len + 1) * sizeof(char));

        if (rand() % 2 == 0)
        {
            for (int j = 0; j < (len + 1) / 2; j++)
            {
                str[j] = rand_ch();
                str[len - 1 - j] = str[j];
            }
        }
        else
        {
            for (int j = 0; j < len; j++)
            {
                str[j] = rand_ch();
            }
        }
        str[len] = '\0';
        printf("%d\n%s\n", len, str);
        free(str);
    }
    return 0;
}