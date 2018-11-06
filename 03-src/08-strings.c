#include "stdio.h"
#include <string.h>

int main(void)
{
  //sizeof 计算数组大小，数组包含'\0'字符
  //strlen 计算字符串的长度，到'\0'结束

  char str4[] = "hello";

  printf("sizeof str:%lu\n", sizeof(str4));
  printf("strlen str:%lu\n", strlen(str4));
  return 0;
}