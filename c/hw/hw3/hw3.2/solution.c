

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
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

        free(string);
    }
    return 0;
}
