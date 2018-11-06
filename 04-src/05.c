#include <stdio.h>

typedef void (p)();


int func(int a, int b) {
  return a + b;
}

int test (int a, int b, int (*p)(int c, int d)) {
  return p(a, b);
}

int main(void)
{

  printf("函数指针作为形参 is %d \n", test(100, 200, func));

  return 0;
}

