#include <stdio.h>
int main()
{
  char str[100];
  printf("input string1 : \n");
  scanf("%s", str);

  //scanf(“%s”,str)默认以空格分隔
  printf("output:%s\n", str);

  return 0;
}