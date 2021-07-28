#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/constants.c"
#include "./helpers/lib_strlen.c"
#include "./helpers/compare_strings.c"

char *lib_strdup(const char *str)
{
   char *dup = (char*)malloc((lib_strlen(str) + 1) * sizeof(char));
   if (dup != NULL)
   {
      int i;
      for (i = 0; i <= lib_strlen(str); i++)
      {
        dup[i] = str[i];
      }
     dup[i] = '\0';
     return dup;
     free(dup);
     dup = NULL;
   }
}

int main()
{   
  char *buffer1 = lib_strdup(short_string);
  char *buffer2 = strdup(short_string);
  char *buffer3 = lib_strdup(long_string);
  char *buffer4 = strdup(long_string);

  //compare custom function and library function
  compare_strings(buffer1, buffer2);
  compare_strings(buffer3, buffer4);

  free(buffer1);
  free(buffer2);
  free(buffer3);
  free(buffer4);
    
  return 0;
}