#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 != 0 && res2 != 0) {
        printf("The character is an alphabetic character\n");
    } else if (res1 == 0 && res2 == 0) {
       printf("The character is not an alphabetic character\n"); 
    } else {
        printf("Your function is incorrect. Check your code.\n");
    }
}

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
   
   compare(res1, res2);
   compare(res3, res4);

}
