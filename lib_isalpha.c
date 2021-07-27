#include <ctype.h>
#include <stdio.h>
#include "./helpers/compare.c"

int lib_isalpha(int symbol)
{
  if (symbol >= 'A' && symbol <= 'Z')
  {
      return 1;
  } else if (symbol >= 'a' && symbol <= 'z') {
      return 1;
  } else {
     return 0;
  }
}

int main()
{
   char symbol1 = 'N';
   char symbol2 = '5';

   int res1 = lib_isalpha(symbol1);
   int res2 = isalpha(symbol1);

   int res3 = lib_isalpha(symbol2);
   int res4 = isalpha(symbol2);
   
   //(custom function, standart function, parameter)
  compare(res1, res2, 1);
  compare(res3, res4, 1);

}
