#include "stdio.h"


int main(int argc, char const *argv[])
{

  FILE *fp =NULL;
  fp = fopen("./test-file.txt","r");

  if (fp == NULL) //返回空，说明打开失败 
  {
    //perror()是标准出错打印函数，能打印调用库函数出错原因
    perror("open");
    return -1;
  }

  printf("level is : %p", fp);
  return 0;
}