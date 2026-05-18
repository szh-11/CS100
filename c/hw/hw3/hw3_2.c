

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int len;
int num;
int account;
int main()
{
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &len);
        getchar();

        char *string = (char *)malloc((len + 1) * sizeof(char));
        fgets(string, len + 1, stdin);
        string[strcspn(string, "\n")] = '\0';
        account = 0;
        for (int j = 0; j < len; j++)
        {
            if (string[j] == string[len - 1 - j])
            {
                account += 1;
            }
        }
        if (account == len)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

        free(string);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // if (argc != 3) {
    //     return 1;
    // }

    int n = atoi(argv[1]);
    int max_len = atoi(argv[2]);

    srand(time(NULL));

    printf("%d\n", n);

    for (int i = 0; i < n; i++)
    {
        int length = rand() % max_len + 1;

        char *s = malloc(length + 1);

        if (rand() % 2 == 0)
        {
            for (int j = 0; j < length; j++)
            {
                int k = length - 1 - j;
                if (k < j)
                    break;
                char c = rand() % 94 + 33; // ASCII 33-126
                s[j] = c;
                s[k] = c;
            }
        }
        else
        {
        }

        s[length] = '\0';
        printf("%d\n%s\n", length, s);
        free(s);
    }

    return 0;
}