#include <string.h>
#include <stdio.h>
#include "helpers/lib_strlen.c"
#include "helpers/lib_toupper.c"

void string_to_upper(char *str)
{
   for (int i = 0; i <= lib_strlen(str); i++)
   {
       str[i] = lib_toupper(str[i]);
   }
}

int main()
{
    char str[100] = "life is beautiful!";

    string_to_upper(str);

    printf("%s\n", str);

    return 0;
}