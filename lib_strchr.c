#include <string.h>
#include <stdio.h>
#include "helpers/lib_strlen.c"

char *lib_strchr(char *str, int symbol)
{
    int i;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == symbol)
          return &str[i];
    }
    return NULL;
}

int main()
{
    char *str = "Hello world";

    char *result = lib_strchr(str, 'a');
    char *result2 = lib_strchr(str, '\0');
    char *res = strchr(str, 'a');
    char *res2 = strchr(str, '\0');

    //printf("%s\n", result);
    printf("%s\n", result2);
    //printf("%s\n", res);
    printf("%s\n", res2);

    if (result == NULL)
       printf("%s\n", "NULL from lib_strchr");
    if (res == NULL)
       printf("%s\n", "NULL fron strchr");

    return 0;

}