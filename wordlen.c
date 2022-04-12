#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSZ 50
int main(int argc, char *argv[])
{
  int ix, max;
  char buffer[BUFSZ];
  char *maxword;
  int optPrint = 0;
  for (ix = 1; ix < argc; ++ix)
  {
    if (argv[ix][0] == '-' && argv[ix][1] == 'p')
      optPrint = 1;
  }
  maxword = malloc(1);
  maxword[0] = '\0';
  max = 0;
  while (0 <= scanf("%s", buffer))
  {
     // if read word is longer than max
        if (strlen(buffer) > max) {
            // update max
            max = strlen(buffer);
            // free previous memory allocated to maxword
            free(maxword);
            // allocate memory for new string
            maxword = (char *) malloc(sizeof(char) * (max + 1));
            // copy string from buffer to maxword
            strcpy(maxword, buffer);
        }
    /* your code goes here */
  }
  printf("maximum length word \"%s\" is %d characters long\n", maxword, max);
  free(maxword);
  return 0;
}
