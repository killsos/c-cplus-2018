#include <stdio.h>

int main()
{
  //定义整型变量a, b, c
  int a;
  int b;
  int c = 1;

  __asm("mov a, 1;mov b, 2");

  printf("%d\n", b);

  return 0;
}