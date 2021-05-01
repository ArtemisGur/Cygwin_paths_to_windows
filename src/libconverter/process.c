#include "process.h"
#include "string.h"

char *make_path(char *string)
{
    int new_len = 0;
    while (*string != '/')
    {
        string++;
    }
    char *out_path = malloc(256);

    *out_path = (char)toupper(*(string + 1));
    *(out_path + 1) = ':';
    *(out_path + 2) = '\\';
    string += 3;
    scopy(out_path + 3, string, slen(string));

    for (int i = 0; i < slen(out_path); i++)
    {
        if (out_path[i] == '/')
            out_path[i] = '\\';
    }

    return out_path;
}