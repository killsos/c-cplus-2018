#include <stdio.h>

#define QL

#ifdef QL

#define PI 3


#endif // DEBUG


int main(void)
{
  printf("PI is %d \n", PI);

  printf("%s\n", __FILE__);
  printf("%d\n", __LINE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);
  return 0;
}

