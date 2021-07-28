#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "helpers/constants.c"
#include "helpers/lib_strlen.c"
#include "helpers/lib_toupper.c"
#include "helpers/make_buffer.c"

char *string_to_upper(char *str)
{
   char *res = make_buffer(lib_strlen(str) + 1);
   int i;
   for (i = 0; i <= lib_strlen(str); i++)
   {
       res[i] = lib_toupper(str[i]);
   }
   res[i] = '\0';
   return res;
}

int main()
{
    char *result1 = string_to_upper(long_string);
    char *result2 = string_to_upper(mixed_string);
    char *result3 = string_to_upper(camel_string);

    printf("%s\n", result1);
    printf("%s\n", result2);
    printf("%s\n", result3);

    return 0;
}