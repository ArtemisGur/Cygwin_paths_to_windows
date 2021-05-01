#include "libconverter/process.h"
#include "libconverter/check.h"
#include "libconverter/string.h"

int main()
{
    char input_string[1024];
    printf("Input path to file: ");
    fgets(input_string, 1024, stdin);

    if (correct_check(input_string) == false)
        return -1;
    char *tmp_path = malloc(slen(input_string) + 1);
    scopy(tmp_path, input_string, slen(input_string));

    if (scmp(stok(input_string, "/"), "cygwin"))
    {
        printf("\nYour converted path: \n\t%s\n", make_path(tmp_path));
    }
    else
        printf("\nYour path: \n\t%s\n", tmp_path);
}