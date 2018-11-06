#include <stdio.h>

typedef void (p)();


void func() {
  printf("Hello world !");
}


int main(void)
{
  p *p1 = func;

  p1();

  return 0;
}

