#include "string.h"

int slen(char *array)
{
    int len = 0;
    while (*array != '\0')
    {
        array++;
        len++;
    }
    return len;
}

bool scmp(char *array_1, const char *array_2)
{
    while (*array_1 != '\0' || *array_2 != '\0')
    {
        if (*array_1 == *array_2)
        {
            array_1++;
            array_2++;
            continue;
        }
        else
            return false;
    }
    return true;
}

void scopy(char *distantion, char *source, int len)
{
    for (int i = 0; i < len; i++)
    {
        distantion[i] = source[i];
    }
}

char *str_chr(const char *s, const char c)
{
    while (*s && *s != c)
        ++s;
    if (*s)
        return (char *)s;
    else
        return NULL;
}

char *stok(char *str, const char *separator)
{
    static char *next;

    if (str)
    {
        next = str;
        while (*next && str_chr(separator, *next))
            *next++ = '\0';
    }

    if (!*next)
        return NULL;

    str = next;
    // printf("%s", str);
    while (*next && !str_chr(separator, *next))
        ++next;
    while (*next && str_chr(separator, *next))
        *next++ = '\0';

    return str;
}

int sspn(char *invalid_values, char *string)
{
    int invalid_len = slen(invalid_values);
    int string_len = slen(string);
    for (int i = 0; i < invalid_len; i++)
    {
        for (int j = 0; j < string_len; j++)
        {
            if (string[j] == invalid_values[i])
                return j;
        }
    }
    return -1;
}