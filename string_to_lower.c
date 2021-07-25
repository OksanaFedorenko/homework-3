#include <string.h>
#include <stdio.h>
#include "helpers/lib_strlen.c"
#include "helpers/lib_tolower.c"

void string_to_lower(char *str)
{
   for (int i = 0; i <= lib_strlen(str); i++)
   {
       str[i] = lib_tolower(str[i]);
   }
}

int main()
{
    char str[100] = "HeLlO worLd!!!";

    string_to_lower(str);

    printf("%s\n", str);

    return 0;
}