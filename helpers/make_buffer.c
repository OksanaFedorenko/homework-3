#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(int size)
{
  char *buffer = (char *)malloc(size * sizeof(char));

  if (buffer != NULL) {
      return buffer;
  } else {
      printf("Malloc didn't allocate memory buffer...\n");
  }
}