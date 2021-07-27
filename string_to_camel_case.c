#include <string.h>
#include <stdio.h>
#include "helpers/lib_strlen.c"
#include "helpers/lib_toupper.c"
#include "helpers/lib_tolower.c"

void string_to_camel_case(char *str)
{
   for (int i = 0; i <= lib_strlen(str); i++)
   {
       str[i] = lib_toupper(str[i]);
       str[i+1] = lib_tolower(str[i+1]);
       i += 1;
   }
}

int main()
{
    //char str[100] = "life is wonderful!";
    char str[100] = "DDDDDkjkljjjDDDDDhhhhhhhh!!!!!!!";

    string_to_camel_case(str);

    printf("%s\n", str);

    return 0;
}