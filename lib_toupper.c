#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 == res2) {
        printf("OK\n");
    }
}

int lib_toupper(int symbol)
{
  if (symbol >= 97 && symbol <= 122)
  {
      return symbol - 32;
  }
     return symbol;
  
}

int main()
{
   char symbol1 = 'n';
   char symbol2 = '9';

   int res1 = lib_toupper(symbol1);
   int res2 = toupper(symbol1);

   printf("%c\n", res1);
   printf("%c\n", res2);

   int res3 = lib_toupper(symbol2);
   int res4 = toupper(symbol2);

    printf("%c\n", res3);
    printf("%c\n", res4);
   
   compare(res1, res2);
   compare(res3, res4);

}