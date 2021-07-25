#include <ctype.h>

int lib_tolower(int symbol)
{
  if (symbol >= 65 && symbol <= 90)
  {
      return symbol + 32;
  }
     return symbol;
  
}