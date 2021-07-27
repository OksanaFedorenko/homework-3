#include <ctype.h>
#include <stdio.h>
#include "./helpers/compare.c"

int lib_isascii(int symbol)
{
  if (symbol >= 0 && symbol <= 127)
  {
      return 1;
  }
     return 0;
  
}

int main()
{
   char symbol1 = 'N';
   int symbol2 = 150;

   int res1 = lib_isascii(symbol1);
   int res2 = isascii(symbol1);

   int res3 = lib_isascii(symbol2);
   int res4 = isascii(symbol2);
   
   compare(res1, res2, 4);
   compare(res3, res4, 4);

}