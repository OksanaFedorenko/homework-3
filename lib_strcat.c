#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/lib_strlen.c"

char *lib_strcat(char *str1, const char *str2)
{
    size_t i,j;

    for (i = 0; str1[i] != '\0'; i++);

    for (j = 0; str2[j] != '\0'; j++)

        str1[i+j] = str2[j];

    str1[i+j] = '\0';

    return str1;

}

int main() 
{
    char str1[100] = "Hello mvlkvn nkln nn";
    char str2[100] = "Hello mvlkvn nkln nn";
    char *str3 = "World grgregrereger vu bhgf hgjhbjn tdxc chhjghjhj tfvb hello";
    int str1_len = lib_strlen(str1);
    int str2_len = lib_strlen(str3);

    //lib_strcat(str1, str2);

    printf("%d\n", str1_len + str2_len);

    char *buffer = malloc(str1_len + str2_len + 1);
    char *buffer2 = malloc(str1_len + str2_len + 1);

    buffer = lib_strcat(str1, str3);
    buffer2 = strcat(str2, str3);
    printf("%s\n", buffer);
    printf("%s\n", str1);
    printf("%s\n", buffer2);
    printf("%s\n", str2);

}

