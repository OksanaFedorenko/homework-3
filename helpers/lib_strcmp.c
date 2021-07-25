#include <string.h>

int lib_strcmp(char *str1, char *str2) {
   while (*str1 == *str2) {
      if (*str1 == '\0' || *str2 == '\0')
         break;
         
      str1++;
      str2++;
   }

   if (*str1 == '\0' && *str2 == '\0')
      return 0;
   else if (*str1 > *str2)
      return 1;
   else
      return -1;
}