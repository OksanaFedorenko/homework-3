#include <ctype.h>
#include <stdio.h>

//res1 - custom function, res2 - standart function
void compare(int res1, int res2)
{
    if (res1 != 0 && res2 != 0) {
        printf("The character is a print character\n");
    } else if (res1 == 0 && res2 == 0) {
       printf("The character is not a print character\n"); 
    } else {
        printf("Your function is incorrect. Check your code.\n");
    }
}

int lib_isprint(int symbol)
{
  if (symbol >= 32 && symbol <= 126)
  {
      return 1;
  }
     return 0;
  
}

int main()
{
   char symbol1 = 'N';
   char symbol2 = '\0';


   int res1 = lib_isprint(symbol1);
   int res2 = isprint(symbol1);

   int res3 = lib_isprint(symbol2);
   int res4 = isprint(symbol2);
   
   compare(res1, res2);
   compare(res3, res4);

}