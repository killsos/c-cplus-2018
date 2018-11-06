#include "stdio.h"

void fun1() {
  int i = 0;
  i++;
  printf("i = %d\n", i);
}

  void fun2()
  {
    int a = 2;

    printf("a = %d\n", a);
  }


int main(int argc, char const *argv[])
{

  fun1();

  return 0;
}

/*
  nested function

  几乎所有的C语言教材上都说C语言函数可以嵌套调用，但不可以嵌套定义。实际上，函数能否嵌套定义与编译器有关


 */