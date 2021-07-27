#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/lib_strlen.c"
#include "./helpers/lib_strcmp.c"

char *lib_strcat(char *str1, const char *str2)
{
    char* begin = str1;
    while (*str1)
        str1++;
 
    while(*str1++ = *str2++);
 
    *str1 = '\0';
    return begin;
}

int main() 
{
    char str1[100] = "Hello world ";
    char str2[100] = "Hello world ";
    char *str3 = "Lorem ipsum dolor sit amet";

    lib_strcat(str1, str3);
    strcat(str2, str3);

}

