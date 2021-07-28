#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "helpers/constants.c"
#include "helpers/lib_strlen.c"
#include "helpers/lib_toupper.c"
#include "helpers/lib_tolower.c"
#include "helpers/make_buffer.c"

char *string_to_camel_case(char *str)
{
   char *res = make_buffer(lib_strlen(str) + 1);
   int i;
   for (i = 0; i < lib_strlen(str); i++)
   {
       res[i] = lib_toupper(str[i]);
       res[i+1] = lib_tolower(str[i+1]);
       i += 1;
   }
   res[i] = '\0';
   return res;
}

int main()
{
    char *result1 = string_to_camel_case(long_string);
    char *result2 = string_to_camel_case(caps_string);
    char *result3 = string_to_camel_case(mixed_string);
    char *result4 = string_to_camel_case(camel_string);

    printf("%s\n", result1);
    printf("%s\n", result2);
    printf("%s\n", result3);
    printf("%s\n", result4);

    return 0;
}