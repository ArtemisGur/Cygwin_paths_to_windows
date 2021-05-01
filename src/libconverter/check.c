#include "check.h"
#include "string.h"

void print_exception(int len)
{
    for (int i = 0; i < len; i++)
    {
        printf(" ");
    }
}

bool correct_check(char *string)
{
    int num;
    if (slen(string) > MAX_PATH)
    {
        printf("\nInvalid path length. Exit.\n\n");
        return false;
    }
    num = sspn("\\*?<>\"|", string);
    if (num != -1)
    {
        printf("%s", string);
        print_exception(num);
        printf("^");
        printf("\n\nInvalid character [%d] in a string\n\n", num + 1);
        return false;
    }
    return true;
}