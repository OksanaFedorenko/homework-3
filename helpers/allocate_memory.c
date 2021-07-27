#include <ctype.h>
#include <stdio.h>

char *lib_allocate_memory(int size)
{
  char *buffer = (char *)malloc(size * sizeof(char));

  if (buffer != NULL) {
      return buffer;
  } else {
      printf("Malloc didn't allocate memory buffer...\n");
  }
  free(buffer);
  buffer = NULL;
}