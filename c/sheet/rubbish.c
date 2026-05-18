
#include <string.h>
#include <stdio.h>
int main()
{
    const char *list = {"-o abcde"};
    if (strncmp(list, "-o", 2) == 0)
    {
        printf("-Werror: Make all warnings into errors.");
        const char *value = list + 3;
        printf("%s: Place the primary output in file %s.", list, value);
    }
}