#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_PATH 260

int slen(char *string);
bool scmp(char *array_1, const char *array_2);
void scopy(char *distantion, char *source, int len);
char *str_chr(const char *s, const char c);
char *stok(char *str, const char *separator);
int sspn(char *invalid_values, char *string);