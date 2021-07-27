#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/lib_strlen.c"


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
    char *short_string = "Hello World";
    char *long_string = "In the second part of this series on trigonometry, we’ll explore JavaScript trigonometric functions and learn how we can apply them to our CSS code.";
   
    char *buffer = lib_strdup(long_string);
    char *buffer2 = strdup(long_string);
    
    printf("Function lib_strdup with a short string:%s\n", buffer);
    printf("Function strdup with a short string:%s\n", buffer2);

    return 0;  
}