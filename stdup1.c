#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SZ 10
char val[] = "abcdefg";
int main(int argc, char *argv[])
{
  int ix;
  char *strings[SZ];
  for (ix = 0; ix < SZ; ++ix)
  {
    strings[ix]= malloc(strlen(val)+ 1 + ix);
    strings[strlen(val)] ='\0' + ix;

    int i;
    for (i=0;i<ix;i++)
    {
      strings[ix][i]='0'+ix;
    }
  
    strcpy(&strings[ix][i], val);
    printf("string %d is %s\n", ix, strings[ix]);
  }
  printf("copied %d strings\n", SZ);
  for (ix = 0; ix < SZ; ++ix)
    free(strings[ix]);
  return 0;
}
