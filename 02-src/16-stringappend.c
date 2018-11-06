#include <stdio.h>
int main()
{
char str1[] = "abcdef";

char dst[100] = {'a','\0'};

int i = 0;
while ( i < 7) {
  printf("%d:%d\n", i, str1[i]);
  i++; 
}
i = 0;
while ( i < 2) {
  printf("%d:%d\n", i, dst[i]);
  i++; 
}
  return 0;
}