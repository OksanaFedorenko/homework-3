#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void compare_strings(char *str1, char *str2)
{
    int res = strcmp(str1, str2);
    if (res) {
      printf("Strings are not the same. Test failed.\n");
    } else {
      printf ("Strings are the same. Test passed.\n");
    }
}