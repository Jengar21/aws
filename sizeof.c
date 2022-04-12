#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("the size of a char is %lu\n", sizeof(char));
  printf("the size of a short is %lu\n", sizeof(short));
  printf("the size of an int is %lu\n", sizeof(int));
  printf("the size of a long is %lu\n", sizeof(long));
  printf("the size of a float is %lu\n", sizeof(float));
  printf("the size of a double is %lu\n", sizeof(double));
  printf("the size of a char * is %lu\n", sizeof(char *));
  printf("the size of a void is %lu\n", sizeof(void));
  return 0;
}