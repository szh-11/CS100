#include <stdio.h>
#include <stddef.h>

int hw3_islower(int ch)
{
    return (ch >= 'a' && ch <= 'z');
}

int hw3_isupper(int ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

int hw3_isalpha(int ch)
{
    return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}
int hw3_isdigit(int ch)
{
    return (ch >= '0' && ch <= '9');
}

int hw3_tolower(int ch)
{
    return (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
}

int hw3_toupper(int ch)
{

    return (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;
}

size_t hw3_strlen(const char *str)
{
    size_t account = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        account += 1;
    }
    return account;
}

char *hw3_strchr(const char *str, int ch)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return (char *)&str[i];
        }
    }
    if (ch == '\0')
    {
        return (char *)&str[i];
    }
    else
    {
        return NULL;
    }
}

char *hw3_strcpy(char *dest, const char *src)
{
    size_t i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return dest;
}

char *hw3_strcat(char *dest, const char *src)
{
    size_t i = 0;
    while (dest[i] != '\0')
    {
        ++i;
    }
    size_t j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        ++i;
        ++j;
    }
    dest[i] = '\0';
    return dest;
}

int hw3_strcmp(const char *lhs, const char *rhs)
{
    int i = 0;
    for (i = 0; lhs[i] == rhs[i] && lhs[i] != '\0'; i++)
    {
    }
    return (unsigned char)lhs[i] - (unsigned char)rhs[i];
}
