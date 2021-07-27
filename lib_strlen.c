#include <string.h>
#include <stdio.h>

int lib_strlen(const char *str)
{
   int i = 0;
   while (str[i] != '\0')
   {
       i++;
   }

   return i;
}

int main()
{
    char *short_string = "Hello World";
    char *long_string = "In the second part of this series on trigonometry, we’ll explore JavaScript trigonometric functions and learn how we can apply them to our CSS code.";
    
    int num = lib_strlen(short_string);
    int num2 = strlen(short_string);

    printf("lib_strlen with short string: %d\n", num);
    printf("strlen with short string: %d\n", num2);

    int num3 = lib_strlen(long_string);
    int num4 = strlen(long_string);

    printf("lib_strlen with long string: %d\n", num3);
    printf("strlen with long string: %d\n", num4);

    if (num == num2 && num3 == num4) 
       printf("Test passed.\n");
    else
       printf("Test failed.\n");
}


