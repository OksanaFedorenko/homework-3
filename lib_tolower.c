#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 == res2) {
        printf("OK\n");
    }
}

int lib_tolower(int symbol)
{
  if (symbol >= 65 && symbol <= 90)
  {
      return symbol + 32;
  }
     return symbol;
  
}

int main()
{
   char symbol1 = 'W';
   char symbol2 = '5';

   int res1 = lib_tolower(symbol1);
   int res2 = tolower(symbol1);

   printf("%c\n", res1);
   printf("%c\n", res2);

   int res3 = lib_tolower(symbol2);
   int res4 = tolower(symbol2);

    printf("%c\n", res3);
    printf("%c\n", res4);
   
   compare(res1, res2);
   compare(res3, res4);

}