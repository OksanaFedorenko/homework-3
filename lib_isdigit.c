#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 > 0 && res2 > 0) {
        printf("The character is a digit\n");
    } else if (res1 == 0 && res2 == 0) {
       printf("The character is not a digit\n"); 
    } else {
        printf("Your function is incorrect. Check your code.\n");
    }
}

int lib_isdigit(int symbol)
{
  if (symbol >= '0' && symbol <= '9')
  {
      return 1;
  }
  return 0;
}

int main()
{
   char symbol1 = '2';
   char symbol2 = 'M';

   int res1 = lib_isdigit(symbol1);
   int res2 = isdigit(symbol1);

   int res3 = lib_isdigit(symbol2);
   int res4 = isdigit(symbol2);
   
   compare(res1, res2);
   compare(res3, res4);

}

