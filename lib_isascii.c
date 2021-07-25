#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 != 0 && res2 != 0) {
        printf("The character is an ascii character\n");
    } else if (res1 == 0 && res2 == 0) {
       printf("The character is not an ascii character\n"); 
    } else {
        printf("Your function is incorrect. Check your code.\n");
    }
}

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
   //char symbol2 = 'à';
   char a = '–';

   int res1 = lib_isascii(symbol1);
   int res2 = isascii(symbol1);

   int res3 = lib_isascii(a);
   int res4 = isascii(a);
   
   compare(res1, res2);
   compare(res3, res4);

}