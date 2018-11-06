#include <stdio.h>
int main()
{
  //定义一个数组，同时初始化所有成员变量
  int a[] = { 1, -2, 3,-4, 5, -6, 7, -8, -9, 10 };

  int i = 0;
  int j = 0;
  int n = sizeof(a) / sizeof(a[0]);
  int tmp;

  for (i = 0; i < n-1; i++) {
    //内循环的目的是比较相邻的元素，把大的放到后面
    for (j = 0; j < n - i -1 ; j++)
    {
      if(a[j] >a[j+1])
      {
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
    /*
      第一次内循环都会找 最大值
      第二次内循环都会找 第二最大值
      以此类推...
     */
  }

  return 0;
}