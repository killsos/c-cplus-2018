#include <stdio.h>
int main()
{
  //不指定长度, 没有0结束符，有多少个元素就有多长
  char buf[] = { 'a', 'b', 'c' };
  printf("buf = %s\n", buf); //乱码
  //指定长度，后面没有赋值的元素，自动补0

  char buf2[100] = { 'a', 'b', 'c' };
  printf("buf2 = %s\n", buf2);

  //所有元素赋值为0 
  char buf3[100] = { 0 };
  printf("buf3 = %s\n", buf3);

  //char buf4[2] = { '1', '2', '3' };//数组越界

  char buf5[50] = { '1', 'a', 'b', '0', '7' };
  printf("buf5 = %s\n", buf5);

  char buf6[50] = { '1', 'a', 'b', 0, '7' };
  printf("buf6 = %s\n", buf6);

  char buf7[50] = { '1', 'a', 'b', '\0', '7' };
  printf("buf7 = %s\n", buf7); 
  
  //使用字符串初始化，编译器自动在后面补0，常用
  char buf8[] = "agjdslgjlsdjg";

  //'\ddd'八进制字义字符，'\xdd'十六进制转移字符
  // \012相当于\n
  char str[] = "\012abc";
  printf("str == %s\n", str);

  return 0;
}