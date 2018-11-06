#include <stdio.h>

void func() {
  printf("Hello world !");
}


int main(void)
{
  printf("函数入口地址是  %p \n", func);

  int *funcAddr = (int *)0x1088acf10;

  void (*myfunc)() = funcAddr;
  // 函数名 就是 函数的入口地址
  myfunc();


  return 0;
}

