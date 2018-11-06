#include <stdio.h>

int main(void)
{
  char  str[100];
  printf("请输入字符串");

  scanf("%[^\n]", str);

  printf("str=%s\n", str);

  return 0;
}
