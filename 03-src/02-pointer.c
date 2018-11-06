#include "stdio.h"

int main(int argc, char const *argv[])
{
  int a = 0;

  int b = 11;

  int *p = &a;
  *p = 100;

  printf("a = %d, *p = %d\n", a, *p);

  p = &b;
  *p = 22;

  printf("b = %d, *p = %d\n", b, *p);

  return 0;
}
